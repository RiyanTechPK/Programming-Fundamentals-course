#include<iostream>
using namespace std;
main(){int number;
    cout<<"enter the number ",
    cin>>number;
    int sum=0;
    while(number>0){
       int digit=number%10;
        sum=sum+digit;

        number=number/10;
    }
   cout<<"sum of digits "<<sum;
}