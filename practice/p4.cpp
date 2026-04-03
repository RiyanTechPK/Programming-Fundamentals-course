#include<iostream>
using namespace std;
main(){int num;
    cout<<" enter a number ";
    cin>>num;
    int digit;
    cout<< " enter digit whose frequency you want";
    cin>>digit;
    int i=0,sel;
    while(num !=0){
        sel=num%10;
        if(sel==digit)
        
        i++;
        num=num/10;}
        cout<<"you digit frequency is "<<i<<endl;
    
}