#include<iostream>
using namespace std;
main(){
    string countryName;
    cout<< "enter country name ";
    cin>>countryName;
    int ticketPrice;
    cout<< "enter ticket price in dollars";
    cin>> ticketPrice;
    if (countryName=="Ireland"){
        int discountTicketPrice;
        discountTicketPrice=(ticketPrice-(10*ticketPrice/100));
        cout<<"ticket price after discount "<<discountTicketPrice;

    }
    if (countryName!="Ireland"){
        int discountTicketPrice;
        discountTicketPrice=ticketPrice-(5*ticketPrice/100);}
    
    }
