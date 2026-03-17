#include <iostream>
using namespace std;

int main()
{
    char choice;


    cout << "Enter any key to start, press 'n' to stop: ";
    cin >> choice;

    while (choice != 'n')
    {

        cout << "I am happy" << endl;


        cout << "Enter again (press 'n' to stop): ";
        cin >> choice;
    }

    cout << "Loop ended." << endl;

    return 0;
}