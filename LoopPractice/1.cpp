#include <iostream>
using namespace std;
main()
{
    char choice;
    cout << "enter your choice ";
    cin >> choice;
    while (choice != 'N' && choice != 'n')
    {
        cout << "you are happy\n";
        cout << "enter your choice\n ";
        cin >> choice;
    }
}