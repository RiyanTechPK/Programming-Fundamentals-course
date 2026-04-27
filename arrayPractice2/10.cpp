#include <iostream>
using namespace std;
main()
{
    

    string names[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter ypour name ";
        cin >> names[i];
    }
    for (int j = 0; j < 2; j++)

    {
        
            for (int j = 0; j < 2; j++)
            {
                if (names[j] > names[j + 1])
                {
                    string temp = names[j];
                    names[j] = names[j + 1];
                    names[j + 1] = temp;
                }
            }
        }
    
    for (int k = 0; k < 3; k++)
    {
        cout << names[k] << endl;
    }
}