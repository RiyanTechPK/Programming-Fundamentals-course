#include<iostream>
using namespace std;
main(){
float vegetablePriceCoins;
cout<< " enter price of vegetables per kilogram in coins ";
cin>>vegetablePriceCoins;
float fruitPriceCoins;
cout<< "enter price of fruits per kilogram in coins ";
cin>> fruitPriceCoins;
int vegWeight;
cout<< " enter total kilograms of vegetables ";
cin>>vegWeight;
int fruitWeight;
cout<<" enter total kilograms of fruits ";
cin>>fruitWeight;
float earningInRupees;
earningInRupees=((vegetablePriceCoins*vegWeight)+(fruitPriceCoins*fruitWeight))/1.94;
cout<<" Earning in rupees "<<earningInRupees;}

