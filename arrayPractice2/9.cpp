#include <iostream>
using namespace std;
main()
{

    cout << "how many names you want to  enter ";
    int num;
    cin >> num;
    string names[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter name ";
        cin >> names[i];
    }

    for (int l = 0; l < num; l++)
    {
        // string name1 = names[l];

        cout << names[l][0]<<endl;
    }
}
// int k=0;
// while(name1[k] != '\0')
//{
//   k++;
// }
// for(int l=0; l<k; l++)
//{

//}
