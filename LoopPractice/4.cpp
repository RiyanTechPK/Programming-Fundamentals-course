#include <iostream>
using namespace std;
main()
{
    cout << "enter number ";
    int num;
    cin >> num;
    int count = 0;
    int i = num;
    while (i > 0)
    {
        count= count +1;
        i = i  / 10;
        
    }
    cout << count;
}
