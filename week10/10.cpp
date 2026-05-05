#include<iostream>
using namespace std;
int multi(int num1);
main()
{
    for(int i=0; i<5; i++)
    {cout<<"Enter number ";
    int num;
    cin>>num;
    cout<<multi(num)<<endl;
    }
}
int multi(int num1)
{
    return num1*5;
}
