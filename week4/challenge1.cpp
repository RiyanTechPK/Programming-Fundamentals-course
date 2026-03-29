#include<iostream>
using namespace std;
main(){
    float  amount;
    int discount;
    cout<<" enter the amount = ";
    cin>>amount;
    if(amount<=5000){
        amount=amount-5*amount/100;
        cout<<"amount after discount = "<<amount;}
    if(amount>5000){
        amount=amount-10*amount/100;
        cout<<"amount after discount = "<<amount;}

    
    
}