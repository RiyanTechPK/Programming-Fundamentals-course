#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter your name";
    cin>>name;
    int i=0;
    while( name[i]!=0)
    {
        i++;
    }
    //i=no. of letters
    for(int j=i; j>=0; j--)
    {
        cout<<name[j];
    }

}