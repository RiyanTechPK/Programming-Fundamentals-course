#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// ─────────────────────────────
// CONSTANTS
// ─────────────────────────────
const int MAX_ROUTES = 20;
const int MAX_CITIES = 20;
const int MAX_SEATS = 40;

// ─────────────────────────────
// STRUCT
// ─────────────────────────────
struct Route
{
    string from;
    string to;
    int fare;
    string time;
    string passenger[MAX_SEATS];
};

// ─────────────────────────────
// GLOBAL DATA
// ─────────────────────────────
string cities[MAX_CITIES];
int cityCount = 0;

Route routes[MAX_ROUTES];
int routeCount = 0;

// ─────────────────────────────
// FUNCTIONS
// ─────────────────────────────
void line(char ch = '-', int len = 50)
{
    for (int i = 0; i < len; i++)
        cout << ch;
    cout << endl;
}

void pause()
{
    cout << "\nPress Enter to continue...";
    cin.get();
}

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void header(string title)
{
    clearScreen();
    line('=');
    cout << "     BUS MANAGEMENT SYSTEM\n";
    line('=');
    cout << title << endl;
    line();
}

// ─────────────────────────────
// FILE HANDLING
// ─────────────────────────────
void saveData()
{
    ofstream file("data.txt");

    file << cityCount << endl;
    for (int i = 0; i < cityCount; i++)
        file << cities[i] << endl;

    file << routeCount << endl;

    for (int i = 0; i < routeCount; i++)
    {
        file << routes[i].from << endl;
        file << routes[i].to << endl;
        file << routes[i].fare << endl;
        file << routes[i].time << endl;

        for (int s = 0; s < MAX_SEATS; s++)
        {
            if (routes[i].passenger[s] == "")
                file << "EMPTY" << endl;
            else
                file << routes[i].passenger[s] << endl;
        }
    }

    file.close();
}

void loadData()
{
    ifstream file("data.txt");

    if (!file)
    {
        cityCount = 4;

        cities[0] = "Lahore";
        cities[1] = "Karachi";
        cities[2] = "Islamabad";
        cities[3] = "Multan";

        routeCount = 1;

        routes[0].from = "Lahore";
        routes[0].to = "Karachi";
        routes[0].fare = 3500;
        routes[0].time = "8:00 AM";

        for (int i = 0; i < MAX_SEATS; i++)
            routes[0].passenger[i] = "";

        return;
    }

    file >> cityCount;
    file.ignore();

    for (int i = 0; i < cityCount; i++)
        getline(file, cities[i]);

    file >> routeCount;
    file.ignore();

    for (int i = 0; i < routeCount; i++)
    {
        getline(file, routes[i].from);
        getline(file, routes[i].to);

        file >> routes[i].fare;
        file.ignore();

        getline(file, routes[i].time);

        for (int s = 0; s < MAX_SEATS; s++)
        {
            string temp;
            getline(file, temp);

            if (temp == "EMPTY")
                routes[i].passenger[s] = "";
            else
                routes[i].passenger[s] = temp;
        }
    }

    file.close();
}

// ─────────────────────────────
// UTILITIES
// ─────────────────────────────
int searchCity(string name)
{
    for (int i = 0; i < cityCount; i++)
    {
        if (cities[i] == name)
            return i;
    }

    return -1;
}

int searchRoute(string from, string to)
{
    for (int i = 0; i < routeCount; i++)
    {
        if (routes[i].from == from &&
            routes[i].to == to)
            return i;
    }

    return -1;
}

bool seatBooked(int routeIndex, int seatNo)
{
    return routes[routeIndex].passenger[seatNo - 1] != "";
}

int bookedSeats(int routeIndex)
{
    int count = 0;

    for (int i = 0; i < MAX_SEATS; i++)
    {
        if (routes[routeIndex].passenger[i] != "")
            count++;
    }

    return count;
}

int remainingSeats(int routeIndex)
{
    return MAX_SEATS - bookedSeats(routeIndex);
}

// ─────────────────────────────
// DISPLAY ROUTES
// ─────────────────────────────
void showRoutes()
{
    header("ALL ROUTES");

    if (routeCount == 0)
    {
        cout << "No routes available.\n";
        pause();
        return;
    }

    cout << "No   Route\t\tFare\tTime\tBooked\n";
    line();

    for (int i = 0; i < routeCount; i++)
    {
        cout << i + 1 << ". "
             << routes[i].from << " -> "
             << routes[i].to
             << "\tPKR " << routes[i].fare
             << "\t" << routes[i].time
             << "\t"
             << bookedSeats(i)
             << "/" << MAX_SEATS
             << endl;
    }
}

// ─────────────────────────────
// SHOW SEATS
// ─────────────────────────────
void showSeats(int routeIndex)
{
    cout << "\n[F = Free] [B = Booked]\n\n";

    for (int i = 0; i < MAX_SEATS; i++)
    {
        if (seatBooked(routeIndex, i + 1))
            cout << "[B:";
        else
            cout << "[F:";

        if (i + 1 < 10)
            cout << "0";

        cout << i + 1 << "] ";

        if ((i + 1) % 5 == 0)
            cout << endl;
    }

    cout << endl;
}

// ─────────────────────────────
// ADMIN FUNCTIONS
// ─────────────────────────────
void addCity()
{
    header("ADD CITY");

    if (cityCount >= MAX_CITIES)
    {
        cout << "City list full.\n";
        pause();
        return;
    }

    cout << "Enter city name: ";

    string name;
    getline(cin, name);

    if (searchCity(name) != -1)
    {
        cout << "City already exists.\n";
        pause();
        return;
    }

    cities[cityCount++] = name;

    saveData();

    cout << "City added successfully.\n";
    pause();
}

void addRoute()
{
    header("ADD ROUTE");

    if (routeCount >= MAX_ROUTES)
    {
        cout << "Route list full.\n";
        pause();
        return;
    }

    cout << "Available Cities:\n";

    for (int i = 0; i < cityCount; i++)
        cout << i + 1 << ". " << cities[i] << endl;

    int fromIndex, toIndex;

    cout << "\nSelect departure city: ";
    cin >> fromIndex;

    cout << "Select destination city: ";
    cin >> toIndex;

    cin.ignore();

    if (fromIndex < 1 || fromIndex > cityCount ||
        toIndex < 1 || toIndex > cityCount)
    {
        cout << "Invalid choice.\n";
        pause();
        return;
    }

    string from = cities[fromIndex - 1];
    string to = cities[toIndex - 1];

    if (searchRoute(from, to) != -1)
    {
        cout << "Route already exists.\n";
        pause();
        return;
    }

    routes[routeCount].from = from;
    routes[routeCount].to = to;

    cout << "Enter fare: ";
    cin >> routes[routeCount].fare;

    cin.ignore();

    cout << "Enter departure time: ";
    getline(cin, routes[routeCount].time);

    for (int i = 0; i < MAX_SEATS; i++)
        routes[routeCount].passenger[i] = "";

    routeCount++;

    saveData();

    cout << "Route added successfully.\n";
    pause();
}

void viewBookings()
{
    showRoutes();

    cout << "\nEnter route number: ";

    int choice;
    cin >> choice;

    cin.ignore();

    if (choice < 1 || choice > routeCount)
    {
        cout << "Invalid route.\n";
        pause();
        return;
    }

    int index = choice - 1;

    header("BOOKINGS");

    cout << "Route: "
         << routes[index].from
         << " -> "
         << routes[index].to
         << endl;

    cout << "Revenue: PKR "
         << bookedSeats(index) * routes[index].fare
         << endl;

    line();

    for (int i = 0; i < MAX_SEATS; i++)
    {
        if (routes[index].passenger[i] != "")
        {
            cout << "Seat "
                 << i + 1
                 << " : "
                 << routes[index].passenger[i]
                 << endl;
        }
    }

    pause();
}

// ─────────────────────────────
// BOOK SEAT
// ─────────────────────────────
void bookSeat()
{
    showRoutes();

    cout << "\nEnter route number: ";

    int choice;
    cin >> choice;

    cin.ignore();

    if (choice < 1 || choice > routeCount)
    {
        cout << "Invalid route.\n";
        pause();
        return;
    }

    int routeIndex = choice - 1;

    if (remainingSeats(routeIndex) == 0)
    {
        cout << "All seats booked.\n";
        pause();
        return;
    }

    showSeats(routeIndex);

    cout << "\nAvailable Seats: "
         << remainingSeats(routeIndex)
         << endl;

    int seatNo;

    cout << "Enter seat number: ";
    cin >> seatNo;

    cin.ignore();

    if (seatNo < 1 || seatNo > MAX_SEATS)
    {
        cout << "Invalid seat.\n";
        pause();
        return;
    }

    if (seatBooked(routeIndex, seatNo))
    {
        cout << "Seat already booked.\n";
        pause();
        return;
    }

    string name;

    cout << "Enter passenger name: ";
    getline(cin, name);

    routes[routeIndex].passenger[seatNo - 1] = name;

    saveData();

    header("TICKET");

    cout << "Passenger : " << name << endl;
    cout << "Route     : "
         << routes[routeIndex].from
         << " -> "
         << routes[routeIndex].to
         << endl;

    cout << "Seat No   : " << seatNo << endl;
    cout << "Fare      : PKR "
         << routes[routeIndex].fare
         << endl;

    cout << "Time      : "
         << routes[routeIndex].time
         << endl;

    cout << "Remaining Seats : "
         << remainingSeats(routeIndex)
         << endl;

    pause();
}

// ─────────────────────────────
// CANCEL BOOKING
// ─────────────────────────────
void cancelBooking()
{
    showRoutes();

    cout << "\nEnter route number: ";

    int choice;
    cin >> choice;

    cin.ignore();

    if (choice < 1 || choice > routeCount)
    {
        cout << "Invalid route.\n";
        pause();
        return;
    }

    int routeIndex = choice - 1;

    showSeats(routeIndex);

    int seatNo;

    cout << "\nEnter seat number: ";
    cin >> seatNo;

    cin.ignore();

    if (seatNo < 1 || seatNo > MAX_SEATS)
    {
        cout << "Invalid seat.\n";
        pause();
        return;
    }

    if (!seatBooked(routeIndex, seatNo))
    {
        cout << "Seat already empty.\n";
        pause();
        return;
    }

    cout << "Booking cancelled for "
         << routes[routeIndex].passenger[seatNo - 1]
         << endl;

    routes[routeIndex].passenger[seatNo - 1] = "";

    saveData();

    pause();
}

// ─────────────────────────────
// ADMIN MENU
// ─────────────────────────────
void adminMenu()
{
    while (true)
    {
        header("ADMIN PANEL");

        cout << "1. View Routes\n";
        cout << "2. Add City\n";
        cout << "3. Add Route\n";
        cout << "4. View Bookings\n";
        cout << "5. Back\n";

        int choice;

        cout << "\nChoice: ";
        cin >> choice;

        cin.ignore();

        if (choice == 1)
        {
            showRoutes();
            pause();
        }
        else if (choice == 2)
            addCity();

        else if (choice == 3)
            addRoute();

        else if (choice == 4)
            viewBookings();

        else if (choice == 5)
            break;

        else
        {
            cout << "Invalid choice.\n";
            pause();
        }
    }
}

// ─────────────────────────────
// ADMIN LOGIN
// ─────────────────────────────
void adminLogin()
{
    header("ADMIN LOGIN");

    string username, password;

    cout << "Username: ";
    getline(cin, username);

    cout << "Password: ";
    getline(cin, password);

    if (username == "admin" &&
        password == "1437")
    {
        adminMenu();
    }
    else
    {
        cout << "Wrong credentials.\n";
        pause();
    }
}

// ─────────────────────────────
// PASSENGER MENU
// ─────────────────────────────
void passengerMenu()
{
    while (true)
    {
        header("PASSENGER PORTAL");

        cout << "1. Book Seat\n";
        cout << "2. Cancel Booking\n";
        cout << "3. Back\n";

        int choice;

        cout << "\nChoice: ";
        cin >> choice;

        cin.ignore();

        if (choice == 1)
            bookSeat();

        else if (choice == 2)
            cancelBooking();

        else if (choice == 3)
            break;

        else
        {
            cout << "Invalid choice.\n";
            pause();
        }
    }
}

// ─────────────────────────────
// MAIN MENU
// ─────────────────────────────
void mainMenu()
{
    while (true)
    {
        header("MAIN MENU");

        cout << "1. Admin\n";
        cout << "2. Passenger\n";
        cout << "3. Exit\n";

        int choice;

        cout << "\nChoice: ";
        cin >> choice;

        cin.ignore();

        if (choice == 1)
            adminLogin();

        else if (choice == 2)
            passengerMenu();

        else if (choice == 3)
            break;

        else
        {
            cout << "Invalid choice.\n";
            pause();
        }
    }
}

// ─────────────────────────────
// MAIN
// ─────────────────────────────
int main()
{
    loadData();

    mainMenu();

    saveData();

    cout << "\nThank you for using system.\n";

    return 0;
}