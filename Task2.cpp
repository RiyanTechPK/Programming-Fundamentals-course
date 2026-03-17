#include <iostream>
using namespace std;

int main()
{

    int num, sum = 0;

    cout << "Enter a number (negative number to stop): ";
    cin >> num;

    while (num >= 0)
    {

        sum = sum + num;

        cout << "Enter another number: ";
        cin >> num;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}