#include <iostream>
using namespace std;
main()
{
    int seatavailability[65];

    string name[65];
    int seat[65];

    for (int i = 1; i < 65; i++)
    {
        seatavailability[i] = 0;
    }

    
    

        cout << "Enter seat number ";
        int seatno;

        cin >> seat[seatno];
        if (seatavailability[seat[seatno]] == 0)
        {
            cout << "Seat  available\n";

            cout << "Enter your name\n ";
            cin >> name[seatno];

            seatavailability[seat[seatno]] = 1;
        }
        else

        {
            cout << "seat  not  available \n";
        }
    

    cout << "names " << "\t" << "seat no\n";
    cout << name[65] << "\t" << seat[65] << endl;
}