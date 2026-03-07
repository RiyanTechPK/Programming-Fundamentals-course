#include<iostream>
using namespace std;
main(){
int pounds;
cout<< "enter weight of fertilizer bag in pounds";
cin>>pounds;
int cost ;
cout<< "cost price of the bag";
cin>>cost;
float area;
cout<< "the area bag can cover";
cin>>area;
float priceForPounds;
priceForPounds=cost/pounds;
cout<<" price of fertilizer for each pound"<<priceForPounds<<endl;
float costForSquarefeet;
costForSquarefeet=cost/area;
cout<<"cost of fertilizer for each squarefeet"<<costForSquarefeet;}

