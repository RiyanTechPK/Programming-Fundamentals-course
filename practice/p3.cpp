#include<iostream>
using namespace std;
main(){
    int num;
    cout<<"enter any number";
    cin>>num;
    int i=0;
    while(num!=0){
       num= num/10;
       i++;
    }
    cout<<"number of digits "<<i;


}