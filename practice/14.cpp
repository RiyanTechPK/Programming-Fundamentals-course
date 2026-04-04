#include<iostream>
using namespace std;
main(){
    cout<<" Enter any number ";
    int number;
    cin>>number;
    int sum = 0;
    while(number>0){
       int rem=number%10;
       sum=sum+rem;
       number=number/10;
    }
    cout<<" sum of digits is "<<sum;

}