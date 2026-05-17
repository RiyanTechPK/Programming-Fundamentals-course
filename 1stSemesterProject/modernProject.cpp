#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

const int SIZE = 65;

int bus;

int prices[6] = {2000, 3000, 2500, 3500, 1500, 2200};

string timings[6] =
    {
        "9:00 am",
        "10:00 am",
        "11:00 am",
        "12:00 pm",
        "5:00 pm",
        "6:00 pm"};

// ---------- FUNCTION PROTOTYPES ----------
void initialize(int arr[]);
void busMenu();
void seatStatus(int avail[]);
void display(int seat[], string name[], int avail[]);
void bookSeat(int seat[], string name[], int avail[], string filename);
void cancelSeat(int seat[], string name[], int avail[], string filename);
void adminPanel(int seat[], string name[], int avail[]);
void passengerPanel(int seat[], string name[], int avail[], string filename);

void price(int prices[], int bus);
void timing(string timings[], int bus);

void saveDataintofiles(int avail[], string name[], string filename, int seatno);
void loadData(int avail[], string name[], string filename);

// ---------- MAIN ----------
int main()
{
    int bus1seat[SIZE], bus2seat[SIZE], bus3seat[SIZE];
    int bus4seat[SIZE], bus5seat[SIZE], bus6seat[SIZE];

    string bus1name[SIZE], bus2name[SIZE], bus3name[SIZE];
    string bus4name[SIZE], bus5name[SIZE], bus6name[SIZE];

    int seatavailability1[SIZE], seatavailability2[SIZE], seatavailability3[SIZE];
    int seatavailability4[SIZE], seatavailability5[SIZE], seatavailability6[SIZE];

    // ---------- INITIALIZE ----------
    initialize(seatavailability1);
    initialize(seatavailability2);
    initialize(seatavailability3);
    initialize(seatavailability4);
    initialize(seatavailability5);
    initialize(seatavailability6);

    // ---------- LOAD FILE DATA ----------
    loadData(seatavailability1, bus1name, "bus1.txt");
    loadData(seatavailability2, bus2name, "bus2.txt");
    loadData(seatavailability3, bus3name, "bus3.txt");
    loadData(seatavailability4, bus4name, "bus4.txt");
    loadData(seatavailability5, bus5name, "bus5.txt");
    loadData(seatavailability6, bus6name, "bus6.txt");

    while (true)
    {
        system("cls");

        cout << "------ BUS MANAGEMENT SYSTEM ------\n";
        cout << "1. Admin\n";
        cout << "2. Passenger\n";
        cout << "3. Exit\n";

        int choice;
        cin >> choice;

        // ---------- ADMIN ----------
        if (choice == 1)
        {
            string username;
            int password;

            cout << "Username: ";
            cin >> username;

            cout << "Password: ";
            cin >> password;

            if (username == "alfareed" && password == 1437)
            {
                busMenu();

                cout << "Enter bus number: ";
                cin >> bus;

                if (bus == 1)
                    adminPanel(bus1seat, bus1name, seatavailability1);

                else if (bus == 2)
                    adminPanel(bus2seat, bus2name, seatavailability2);

                else if (bus == 3)
                    adminPanel(bus3seat, bus3name, seatavailability3);

                else if (bus == 4)
                    adminPanel(bus4seat, bus4name, seatavailability4);

                else if (bus == 5)
                    adminPanel(bus5seat, bus5name, seatavailability5);

                else if (bus == 6)
                    adminPanel(bus6seat, bus6name, seatavailability6);

                else
                    cout << "Invalid bus number\n";

                getch();
            }
            else
            {
                cout << "Wrong credentials\n";
                getch();
            }
        }

        // ---------- PASSENGER ----------
        else if (choice == 2)
        {
            busMenu();

            cout << "Enter bus number: ";
            cin >> bus;

            if (bus == 1)
                passengerPanel(bus1seat, bus1name, seatavailability1, "bus1.txt");

            else if (bus == 2)
                passengerPanel(bus2seat, bus2name, seatavailability2, "bus2.txt");

            else if (bus == 3)
                passengerPanel(bus3seat, bus3name, seatavailability3, "bus3.txt");

            else if (bus == 4)
                passengerPanel(bus4seat, bus4name, seatavailability4, "bus4.txt");

            else if (bus == 5)
                passengerPanel(bus5seat, bus5name, seatavailability5, "bus5.txt");

            else if (bus == 6)
                passengerPanel(bus6seat, bus6name, seatavailability6, "bus6.txt");

            else
                cout << "Invalid bus number\n";

            getch();
        }

        // ---------- EXIT ----------
        else if (choice == 3)
        {
            break;
        }

        else
        {
            cout << "Invalid option\n";
            getch();
        }
    }

    cout << "Thanks for using system\n";
    getch();
}

// ---------- FUNCTIONS ----------

void initialize(int arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = 0;
    }
}

void busMenu()
{
    cout << "\n1. Bus1 (Lahore to Islamabad)\n";
    cout << "2. Bus2 (Lahore to Burewala)\n";
    cout << "3. Bus3 (Lahore to Vehari)\n";
    cout << "4. Bus4 (Lahore to Sialkot)\n";
    cout << "5. Bus5 (Lahore to Peshawar)\n";
    cout << "6. Bus6 (Lahore to Chistian)\n";
}

void seatStatus(int avail[])
{
    int available = 0;
    int booked = 0;

    for (int i = 1; i < SIZE; i++)
    {
        if (avail[i] == 0)
            available++;
        else
            booked++;
    }

    cout << "Total seats     : " << SIZE - 1 << endl;
    cout << "Available seats : " << available << endl;
    cout << "Booked seats    : " << booked << endl;
}

void display(int seat[], string name[], int avail[])
{
    cout << "\nName\tSeat\n";

    for (int i = 1; i < SIZE; i++)
    {
        if (avail[i] == 1)
        {
            cout << name[i] << "\t" << seat[i] << endl;
        }
    }
}

void bookSeat(int seat[], string name[], int avail[], string filename)
{
    int seatno;

    cout << "Enter seat number (1-65): ";
    cin >> seatno;

    if (seatno < 1 || seatno > 65)
    {
        cout << "Invalid seat\n";
    }

    else if (avail[seatno] == 0)
    {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name[seatno]);

        seat[seatno] = seatno;
        avail[seatno] = 1;

        cout << "Seat booked successfully\n";
    }

    else
    {
        cout << "Seat already booked\n";
    }
    saveDataintofiles(avail, name, filename, seatno);
}

void cancelSeat(int seat[], string name[], int avail[], string filename)
{
    int seatno;

    cout << "Enter seat number: ";
    cin >> seatno;

    if (seatno < 1 || seatno > 65)
    {
        cout << "Invalid seat\n";
    }

    else if (avail[seatno] == 1)
    {
        seat[seatno] = 0;
        avail[seatno] = 0;
        name[seatno] = "";

        saveDataintofiles(avail, name, filename, seatno);

        cout << "Seat cancelled successfully\n";
    }

    else
    {
        cout << "Seat already empty\n";
    }
}

void adminPanel(int seat[], string name[], int avail[])
{
    int choice;

    cout << "\n1. Seat Status\n";
    cout << "2. Display Bookings\n";

    cin >> choice;

    if (choice == 1)
    {
        seatStatus(avail);

        cout << "\nBooked Seats:\n";
        display(seat, name, avail);
    }

    else if (choice == 2)
    {
        display(seat, name, avail);
    }
}

void passengerPanel(int seat[], string name[], int avail[], string filename)
{
    int option;

    cout << "\n1. Seat Status\n";
    cout << "2. Book Seat\n";
    cout << "3. Cancel Seat\n";
    cout << "4. Fare\n";
    cout << "5. Timing\n";

    cin >> option;

    if (option == 1)
    {
        seatStatus(avail);

        cout << "\nBooked Seats:\n";
        display(seat, name, avail);
    }

    else if (option == 2)
    {
        bookSeat(seat, name, avail, filename);
    }

    else if (option == 3)
    {
        cancelSeat(seat, name, avail, filename);
    }

    else if (option == 4)
    {
        price(prices, bus);
    }

    else if (option == 5)
    {
        timing(timings, bus);
    }

    else
    {
        cout << "Invalid option\n";
    }
}

void timing(string timings[], int bus)
{
    cout << "Bus Timing : " << timings[bus - 1] << endl;
}

void price(int prices[], int bus)
{
    cout << "Ticket Price : " << prices[bus - 1] << " Rs\n";
}

// ---------- FILE HANDLING ----------

void saveDataintofiles(int avail[], string name[], string filename, int seatno)
{
    fstream file;
    file.open(filename, ios::app);

    file << seatno << "," << name[seatno] << "," << endl;

    file.close();
}

void loadData(int avail[], string names[], string filename)
{
    fstream file(filename, ios::in);

    if (!file)
    {
        cout << "File not found";
        return;
    }

    string seat, passengerName;

    while (getline(file, seat, ',') &&
           getline(file, passengerName))
    {
        int seatno = stoi(seat);

        names[seatno] = passengerName;
        avail[seatno] = 1;
    }

    file.close();
}