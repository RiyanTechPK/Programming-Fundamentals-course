#include <iostream>
using namespace std;
main()
{
    cout << "Enter number of lines opf triangle ";
    int num;
    cin >> num;
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
            
        }
        cout<<endl;

        
    }
}