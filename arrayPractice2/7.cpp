#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter name ";
    cin>>name;
    int i=0;
    while(name[i] !='\0') 
    {
        i++;
    }cout<<i;
}