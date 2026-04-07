#include <iostream>
using namespace std;
main()
{
    int num1, num2, HCF, LCM,num, hcf, lcm;
    cout << "Enter 1st number ";
    cin >> num1;
    cout << "Enter 2nd number ";
    cin >> num2;
    int i = 1; 
    while (i <= num1 && i <= num2)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
        i++;
    }
    cout << "hcf " << hcf<<endl;
    cout << "lcm " << (num1 * num2) / hcf;
}

