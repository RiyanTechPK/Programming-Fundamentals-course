#include<iostream>
using namespace std;
main(){
string name;
cout<<"enter the name of movie";
cin>>name;
int adultTicketPrice;
cout<<"enter the adult ticket price";
cin>>adultTicketPrice;
int childTicketPrice;
cout<<"enter child ticket price";
cin>>childTicketPrice;
int adultTicketSale;
cout<<"enter number of sales of adult ticket";
cin>>adultTicketSale;
int childTicketSale;
cout<<"enter number of sales of child ticket";
cin>>childTicketSale;
float donationPercentage;
cout<<"enter percentage donation to charity";
cin>>donationPercentage;
int totalEarning;
totalEarning=adultTicketPrice*adultTicketSale+childTicketPrice*childTicketSale;
cout<<"total earning "<<totalEarning<<endl;
int earningAfterCharity;
earningAfterCharity=totalEarning*donationPercentage/100;
cout<<"Earning after charity"<<earningAfterCharity;}


