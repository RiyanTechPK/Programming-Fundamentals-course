#include<iostream>
using namespace std;
main()
{
    int arrayOfNumber[5];
    int i=0;
    while(i<5)
    {
        cout<<"enter number ";
        cin>>arrayOfNumber[i];
        i++;
    }
    cout<<"Loca"<<"\t"<<"Number\n";
    for(int j=0; j<5; j++)
    {
        cout<<j <<    "\t"<<arrayOfNumber[j];
        cout<<endl;
    }
}
    