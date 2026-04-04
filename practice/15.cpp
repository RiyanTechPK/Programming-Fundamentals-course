#include <iostream>
using namespace std;
main()
{
    cout << "Enter 1st integer " ;
    int n1;
    cin >> n1;
    cout << "Enter second integer ";
    int n2;
    cin >> n2;
    int hcf, lcm;
    int i = 1;
    while (i <= n1 && i <= n2)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {

            hcf = i;
        
        }
        i++;
    }
    cout << "Hcf " << hcf << endl;
    cout << "lcm " << n1 * n2 / hcf;
}