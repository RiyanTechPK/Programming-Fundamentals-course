#include <iostream>
using namespace std;
main()

{
    int array[4];
    for (int i = 1; i < 4; i++)
    {
        cout << "Enter number ";
        cin >> array[i];
    }

    array[0] = {0};
     int highestno = array[0];
    for (int j = 1; j <= 3; j++)
    {
        
        if (array[j] > highestno)
        {
            highestno = array[j];
        }
    }
    cout<<highestno;
}