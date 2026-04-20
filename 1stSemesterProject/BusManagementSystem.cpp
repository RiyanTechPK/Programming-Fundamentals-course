#include <iostream>
#include <conio.h>
using namespace std;
main()
{

    // data structures
    int bus1seat[65];
    string bus1name[65];
    int bus2seat[65];
    string bus2name[65];
    int bus3seat[65];
    string bus3name[65];
    int bus4seat[65];
    string bus4name[65];
    int bus5seat[65];
    string bus5name[65];
    int bus6seat[65];
    string bus6name[65];
    int seatavailability1[65];
    int seatavailability2[65];
    int seatavailability3[65];
    int seatavailability4[65];
    int seatavailability5[65];
    int seatavailability6[65];

    // initializing seats as available
    for (int i = 0; i < 65; i++)
    {
        seatavailability1[i] = 0;
        seatavailability2[i] = 0;
        seatavailability3[i] = 0;
        seatavailability4[i] = 0;
        seatavailability5[i] = 0;
        seatavailability6[i] = 0;
    }
    while (true)
    {
        system("cls");
        cout << "---------------------------------------\n"
                "-------- BUS MANAGEMENT SYSTEM --------\n"
                "---------------------------------------\n";
        cout << " \"Welcome to Alfareed Movers\" \n";
        cout << "How can we help you sir/madam ?\n";
        cout << "------------------Menu-------------------\n";

        cout << "1.Admin\n";
        cout << "2.Passenger\n";
        cout << "3. Exit\n";

        int choice;
        cout << "Enter your choice ";
        cin >> choice;

        if (choice == 1)
        {
            system("cls");
            // enter admin code here
            bool isfound = false;
            while (true)
            {

                cout << "Enter ussername ";
                string username;
                cin >> username;
                cout << "Password ";
                int password;
                cin >> password;

                if (username == "alfareed" && password == 1437)
                {

                    isfound = true;
                    cout << "login succesfully \n";
                    break;
                }
                else
                {
                    cout << "Wrong credentials \n";
                }
            }

            while (isfound)
            {
                system("cls");
                cout << "----------All routes----------\n";
                int opt;
                cout << "1. Garhamorr to Farooqabad \n";
                cout << "2. Vehari to Farooqabad \n";
                cout << "3. Vehari to Islamabad \n";
                cout << "4. Vehari to Sialkot \n";
                cout << "5. Hasilpur to Rawalpindi \n";
                cout << "6. Hafizabad to Garhamorr \n";
                cout << "Enter your option ";
                cin >> opt;
                system("cls");
                if (opt == 1)
                {
                    // for bus 1

                    cout << "Name " << "\t" << "Seat number" << endl;
                    for (int i = 0; i < 65; i++)
                    {
                        if (seatavailability1[i] == 1)
                        {

                            cout << bus1name[i] << "\t" << bus1seat[i] << endl;
                        }
                    }
                    getch();
                    break;
                }
                else if (opt == 2)
                {
                    // for bus 2
                    cout << "Name " << "\t" << "Seat number" << endl;
                    for (int i = 0; i < 65; i++)
                    {
                        if (seatavailability2[i] == 1)
                        {

                            cout << bus2name[i] << "\t" << bus2seat[i] << endl;
                        }
                    }
                    getch();
                    break;
                }
                else if (opt == 3)
                {
                    // for bus 3
                    cout << "Name " << "\t" << "Seat number" << endl;
                    for (int i = 0; i < 65; i++)
                    {
                        if (seatavailability3[i] == 1)
                        {

                            cout << bus3name[i] << "\t" << bus3seat[i] << endl;
                        }
                    }
                    getch();
                    break;
                }
                else if (opt == 4)
                {
                    // for bus 4
                    cout << "Name " << "\t" << "Seat number" << endl;
                    for (int i = 0; i < 65; i++)
                    {
                        if (seatavailability4[i] == 1)
                        {

                            cout << bus4name[i] << "\t" << bus4seat[i] << endl;
                        }
                    }
                    getch();
                    break;
                }
                else if (opt == 5)
                {
                    // for bus 5
                    cout << "Name " << "\t" << "Seat number" << endl;
                    for (int i = 0; i < 65; i++)
                    {
                        if (seatavailability5[i] == 1)
                        {

                            cout << bus5name[i] << "\t" << bus5seat[i] << endl;
                        }
                    }
                    getch();
                    break;
                }
                else if (opt == 6)
                {
                    // for bus 6
                    cout << "Name " << "\t" << "Seat number" << endl;
                    for (int i = 0; i < 65; i++)
                    {
                        if (seatavailability6[i] == 1)
                        {

                            cout << bus6name[i] << "\t" << bus6seat[i] << endl;
                        }
                    }
                    getch();
                    break;
                }
            }
        }
        else if (choice == 2)
            while (true)
            {
                system("cls");
                {
                    // enter passenger code here

                    cout << "Passenger menu \n";
                    cout << "1. Book ticket \n";
                    cout << "2. Cancel ticket \n";

                    cout << "Choose option \n";

                    int option;
                    cin >> option;
                    cout << "You choose option " << option << endl;
                    if (option == 1)
                    {
                        system("cls");
                        int opt;

                        cout << "----------All routes----------\n";
                        cout << "1. Garhamorr to Farooqabad \n";
                        cout << "2. Vehari to Farooqabad \n";
                        cout << "3. Vehari to Islamabad \n";
                        cout << "4. Vehari to Sialkot \n";
                        cout << "5. Hasilpur to Rawalpindi \n";
                        cout << "6. Hafizabad to Garhamorr \n";
                        cout << "Enter your option ";
                        cin >> opt;
                        system("cls");
                        if (opt == 1)
                        {
                            // code here

                            cout << "Departure time is 6:00 am\n";

                            int seatno;
                            cout << "Enter seat number (1-65): ";
                            cin >> seatno;
                            if (seatno > 65)
                            {
                                cout << "Invalid seat number";
                            }
                            else if (seatavailability1[seatno] == 0)
                            {

                                cout << "\nEnter your name: ";
                                cin >> bus1name[seatno];
                                bus1seat[seatno] = seatno;
                                cout << "Seat booked successfully ";

                                seatavailability1[seatno] = 1;
                            }
                            else
                            {
                                cout << "Seat already booked ";
                            }
                            cout << "Press any key to continue ";
                            getch();
                        }

                        else if (opt == 2)
                        {
                            system("cls");
                            // code here
                            cout << "Departure time is 8:00 am\n";
                            int seatno;
                            cout << "Enter seat number (1-65): ";
                            cin >> seatno;
                            if (seatno > 65)
                            {
                                cout << "Invalid seat number";
                            }
                            else if (seatavailability2[seatno] == 0)
                            {

                                cout << "\nEnter your name: ";
                                cin >> bus2name[seatno];
                                bus2seat[seatno] = seatno;
                                cout << "Seat booked successfully ";

                                seatavailability2[seatno] = 1;
                            }
                            else
                            {
                                cout << "Seat already booked ";
                            }
                            cout << "Press any key to continue ";
                            getch();
                        }

                        else if (opt == 3)
                        {
                            // code here
                            cout << "Departure time is 9:00 am\n";

                            int seatno;
                            cout << "Enter seat number (1-65): ";
                            cin >> seatno;
                            if (seatno > 65)
                            {
                                cout << "Invalid seat number";
                            }
                            else if (seatavailability3[seatno] == 0)
                            {

                                cout << "\nEnter your name: ";
                                cin >> bus3name[seatno];
                                bus3seat[seatno] = seatno;
                                cout << "Seat booked successfully ";

                                seatavailability3[seatno] = 1;
                            }
                            else
                            {
                                cout << "Seat already booked ";
                            }
                            cout << "Press any key to continue ";
                            getch();
                        }

                        else if (opt == 4)
                        {
                            // code here
                            cout << "Departure time is 10:00 am\n";
                            int seatno;
                            cout << "Enter seat number (1-65): ";
                            cin >> seatno;
                            if (seatno > 65)
                            {
                                cout << "Invalid seat number";
                            }
                            else if (seatavailability4[seatno] == 0)
                            {

                                cout << "Enter your name: ";
                                cin >> bus4name[seatno];
                                bus4seat[seatno] = seatno;
                                cout << "Seat booked successfully ";

                                seatavailability4[seatno] = 1;
                            }
                            else
                            {
                                cout << "Seat already booked ";
                            }
                            cout << "Press any key to continue ";
                            getch();
                        }

                        else if (opt == 5)
                        {
                            // code here
                            cout << "Departure time is 11:00 am\n";

                            int seatno;
                            cout << "Enter seat number (1-65): ";
                            cin >> seatno;
                            if (seatno > 65)
                            {
                                cout << "Invalid seat number";
                            }
                            else if (seatavailability5[seatno] == 0)
                            {

                                cout << "Enter your name: ";
                                cin >> bus5name[seatno];
                                bus5seat[seatno] = seatno;
                                cout << "Seat booked successfully ";

                                seatavailability5[seatno] = 1;
                            }
                            else
                            {
                                cout << "Seat already booked ";
                            }
                            cout << "Press any key to continue ";
                            getch();
                        }

                        else if (opt == 6)
                        {
                            // code here
                            cout << "Departure time is 12:00 pm\n";
                            int seatno;
                            cout << "Enter seat number (1-65): ";
                            cin >> seatno;
                            if (seatno > 65)
                            {
                                cout << "Invalid seat number";
                            }
                            else if (seatavailability6[seatno] == 0)
                            {

                                cout << "Enter your name: ";
                                cin >> bus6name[seatno];
                                bus6seat[seatno] = seatno;
                                cout << "Seat booked successfully ";

                                seatavailability6[seatno] = 1;
                            }
                            else
                            {
                                cout << "Seat already booked ";
                            }
                            cout << "Press any key to continue ";
                            getch();
                        }

                        else
                        {
                            cout << "You entered wrong option ";
                        }
                        
                    }

                    else if (option == 2)
                    // code for cancellation seats

                    {
                        system("cls");
                        cout << "----------All routes----------\n";
                        cout << "1. Garhamorr to Farooqabad \n";
                        cout << "2. Vehari to Farooqabad \n";
                        cout << "3. Vehari to Islamabad \n";
                        cout << "4. Vehari to Sialkot \n";
                        cout << "5. Hasilpur to Rawalpindi \n";
                        cout << "6. Hafizabad to Garhamorr \n";
                        cout << "Enter your option ";
                        int choose;
                        cin >> choose;
                        system("cls");
                        if (choose == 1)
                        {
                            // code here to cancel seat of bus 1
                            cout << "enter seat number you want to cancel ";
                            int num1;
                            cin >> num1;
                            bus1seat[num1] = 0;
                            seatavailability1[num1] = 0;
                            cout << "Seat cancelled successfully";
                            cout << "Press any key to continue ";
                            getch();
                        }
                        else if (choose == 2)
                        {
                            // code here to cancel seat of bus 2
                            cout << "enter seat number you want to cancel ";
                            int num2;
                            cin >> num2;
                            bus1seat[num2] = 0;
                            seatavailability1[num2] = 0;
                            cout << "Seat cancelled successfully";
                            cout << "Press any key to continue ";
                            getch();
                        }
                        else if (choose == 3)
                        {
                            // code here to cancel seat of bus 3
                            cout << "enter seat number you want to cancel ";
                            int num3;
                            cin >> num3;
                            bus1seat[num3] = 0;
                            seatavailability1[num3] = 0;
                            cout << "Seat cancelled successfully";
                            cout << "Press any key to continue ";
                            getch();
                        }
                        else if (choose == 4)
                        {
                            // code here to cancel seat of bus 4
                            cout << "enter seat number you want to cancel ";
                            int num4;
                            cin >> num4;
                            bus1seat[num4] = 0;
                            seatavailability1[num4] = 0;
                            cout << "Seat cancelled successfully";
                            cout << "Press any key to continue ";
                            getch();
                        }
                        else if (choose == 5)
                        {
                            // code here to cancel seat of bus 5
                            cout << "enter seat number you want to cancel ";
                            int num5;
                            cin >> num5;
                            bus1seat[num5] = 0;
                            seatavailability1[num5] = 0;
                            cout << "Seat cancelled successfully";
                            cout << "Press any key to continue ";
                            getch();
                        }
                        else if (choose == 6)
                        {
                            // code here to cancel seat of bus 6
                            cout << "enter seat number you want to cancel ";
                            int num6;
                            cin >> num6;
                            bus1seat[num6] = 0;
                            seatavailability1[num6] = 0;
                            cout << "Seat cancelled successfully";

                            cout << "Press any key to continue ";
                            getch();
                        }
                    }
                }

                break;
            }
        else if (choice == 3)
        {

            break;
            getch;
        }
        else
        {
            cout << "you entered wrong option";
        }
    }
    cout << "Thanks for using this software ";
    cout << "Press any key to continue ";
    getch();
}