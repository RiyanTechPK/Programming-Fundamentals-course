#include<iostream>
using namespace std;
main(){
    int num, sum=0;
    cout<<"Enter number"<<endl;
    cin>>num;
    while(num>=0){
        sum = sum + num;
        cout<<"Enter number"<<endl;
    cin>>num;

    }
    cout<<"Sum is "<<sum;
}