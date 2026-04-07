#include<iostream>
using namespace std;
main(){int length,num1=0,num2=1,num;
    cout<<"enter lengthg of fabnocci series ";
    cin>>length;
    cout<<num1 <<" ";
    cout<<num2 <<" ";
    for(int i=1; i<=length-2; i++)
    {
        num=num1+num2;
        cout<<num <<" ";
        num1=num2;
        num2=num;

    }
}