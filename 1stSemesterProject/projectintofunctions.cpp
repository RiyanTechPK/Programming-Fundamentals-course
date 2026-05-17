#include <iostream>
#include <conio.h>
using namespace std;

const int SIZE = 65;

// functions prototypes
void display(int seat[], string name[], int avail[]);
void initialize(int arr[]);
void bookSeat(int seat[], string name[], int avail[]);
void cancelSeat(int seat[], int avail[]);


// -------- MAIN --------
int main()
{
    int bus1seat[SIZE];
    int bus2seat[SIZE];
    int bus3seat[SIZE];
    int bus4seat[SIZE];
    int bus5seat[SIZE];
    int bus6seat[SIZE];

    string bus1name[SIZE];
    string bus2name[SIZE];
    string bus3name[SIZE];
    string bus4name[SIZE];
    string bus5name[SIZE];
    string bus6name[SIZE];

    int seatavailability1[SIZE];
    int seatavailability2[SIZE];
    int seatavailability3[SIZE];
    int seatavailability4[SIZE];
    int seatavailability5[SIZE];
    int seatavailability6[SIZE];

    // initialize all
    initialize(seatavailability1);
    initialize(seatavailability2);
    initialize(seatavailability3);
    initialize(seatavailability4);
    initialize(seatavailability5);
    initialize(seatavailability6);

    while (true)
    {
        system("cls");
        cout << "------ BUS MANAGEMENT SYSTEM ------\n";
        cout << "1. Admin\n2. Passenger\n3. Exit\n";

        int choice;
        cin >> choice;

        // -------- ADMIN --------
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
                int choice;
                cout << "1. Seat counter \n";
                "2.Search Bus ";
                cin >> choice;
                if (choice == 1)
                {
                    cout << "Total seats " << SIZE;
                    cout << "Booked seats " << bookSeat;
                }
                else if (choice == 2)
                {

                    int opt;
                    cout << "Select Bus (1-6): ";
                    cin >> opt;

                    if (opt == 1)
                    {
                        display(bus1seat, bus1name, seatavailability1);
                    }

                    else if (opt == 2)
                    {
                        display(bus2seat, bus2name, seatavailability2);
                    }
                    else if (opt == 3)
                    {
                        display(bus3seat, bus3name, seatavailability3);
                    }
                    else if (opt == 4)
                    {
                        display(bus4seat, bus4name, seatavailability4);
                    }
                    else if (opt == 5)
                    {
                        display(bus5seat, bus5name, seatavailability5);
                    }
                    else if (opt == 6)
                    {
                        display(bus6seat, bus6name, seatavailability6);
                    }

                    getch();
                }
                else
                    cout << "Wrong credentials\n";
            }
        }

        // -------- PASSENGER --------
        else if (choice == 2)
        {
            int option;
            cout << "1. Book\n2. Cancel\n";
            cin >> option;

            int opt;
            cout << "Select Bus (1-6): ";
            cin >> opt;

            if (option == 1)
            {
                if (opt == 1)
                {
                    bookSeat(bus1seat, bus1name, seatavailability1);
                }
                else if (opt == 2)
                {
                    bookSeat(bus2seat, bus2name, seatavailability2);
                }
                else if (opt == 3)
                {
                    bookSeat(bus3seat, bus3name, seatavailability3);
                }
                else if (opt == 4)
                {
                    bookSeat(bus4seat, bus4name, seatavailability4);
                }
                else if (opt == 5)
                {
                    bookSeat(bus5seat, bus5name, seatavailability5);
                }
                else if (opt == 6)
                {
                    bookSeat(bus6seat, bus6name, seatavailability6);
                }
            }
            else if (option == 2)
            {
                if (opt == 1)
                {
                    cancelSeat(bus1seat, seatavailability1);
                }
                else if (opt == 2)
                {
                    cancelSeat(bus2seat, seatavailability2);
                }
                else if (opt == 3)
                {
                    cancelSeat(bus3seat, seatavailability3);
                }
                else if (opt == 4)
                {
                    cancelSeat(bus4seat, seatavailability4);
                }
                else if (opt == 5)
                {
                    cancelSeat(bus5seat, seatavailability5);
                }
                else if (opt == 6)
                {
                    cancelSeat(bus6seat, seatavailability6);
                }
            }

            getch();
        }

        else if (choice == 3)
            break;

        else
            cout << "Invalid option\n";
    }

    cout << "Thanks for using system\n";
    getch();
}

// -------- FUNCTIONS --------
void initialize(int arr[])
{
    for (int i = 0; i < SIZE; i++)
        arr[i] = 0;
}

void bookSeat(int seat[], string name[], int avail[])
{
    int seatno;
    cout << "Enter seat number (1-65): ";
    cin >> seatno;

    if (seatno < 1 || seatno > 65)
        cout << "Invalid seat\n";

    else if (avail[seatno] == 0)
    {
        cout << "Enter name: ";
        cin >> name[seatno];

        seat[seatno] = seatno;
        avail[seatno] = 1;

        cout << "Seat booked successfully\n";
    }
    else
        cout << "Seat already booked\n";
}

void cancelSeat(int seat[], int avail[])
{
    int seatno;
    cout << "Enter seat number: ";
    cin >> seatno;

    if (seatno < 1 || seatno > 65)
        cout << "Invalid seat\n";

    else if (avail[seatno] == 1)
    {
        seat[seatno] = 0;
        avail[seatno] = 0;
        cout << "Seat cancelled successfully\n";
    }
    else
        cout << "Seat already empty\n";
}

void display(int seat[], string name[], int avail[])
{
    cout << "Name\tSeat\n";
    for (int i = 1; i < SIZE; i++)
    {
        if (avail[i] == 1)
            cout << name[i] << "\t" << seat[i] << endl;
    }
}