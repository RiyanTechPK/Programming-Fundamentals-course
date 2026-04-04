#include <iostream>
using namespace std;
main()
{
    cout << "Enter any number ";
    int num;
    cin >> num;
    cout << "Enter digit whose frequency youn want ";
    int digit;
    cin >> digit;
    int frequency = 0;
    while (num > 0)
    {
        int rem = num % 10;
        if (rem == digit)
        {
            frequency++;
        }
        num = num / 10;
    }
    cout << "Frequency of your digit is " << frequency;
}