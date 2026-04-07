#include <iostream>
using namespace std;
main()
{
    cout << "Entry number ";
    int num;
    cin >> num;
    cout << "Enter digit whose frequency you want to find";
    int digit;
    cin >> digit;
    int i = 0;
    int Digit;
    while (num>0)
    {
        Digit = num % 10;
        
        if(digit==Digit)
        i++;
        num=num/10;
    }
    cout << "Frequency of your digit is " << i;
}