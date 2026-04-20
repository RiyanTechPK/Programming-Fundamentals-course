

#include<iostream>
using namespace std;
int main()
{
    int seat[65] = {0};   // 0 = available, 1 = booked

    for (int j = 0; j < 65; j++)
    {
        string name;
        int number;

        cout << "\nEnter your name: ";
        cin >> name;

        cout << "Enter seat number (1-65): ";
        cin >> number;

        // Check valid range
        if (number < 1 || number > 65)
        {
            cout << "Invalid seat number\n";
        }
        // Check if already booked
        else if (seat[number - 1] == 1)
        {
            cout << "Seat already booked\n";
        }
        // Book seat
        else
        {
            seat[number - 1] = 1;
            cout << "Seat is available\n";
            cout << "Booked for " << name << " at seat " << number << endl;
        }
    }

    return 0;
}