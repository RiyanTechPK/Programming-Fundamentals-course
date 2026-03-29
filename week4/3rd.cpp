#include<iostream>
using namespace std;
main(){
    int temp,temp1,temp2;
    cout<<"enter temperature of 1st city ";
    cin>>temp1;
    cout<<"enter temperature of 2nd city ";
    cin>>temp2;
    temp=(temp1-temp2);
    if(temp>10)
    cout<<"temperatur difference is too big";
    else{cout<<"program ends";}


}