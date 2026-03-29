#include<iostream>
using namespace std;
main(){
    int speed;
    cout<<"enter the speed ";
    cin>>speed;
    if(speed<=10){
        cout<<"speed is slow";}
        else if(speed>10 && speed<=50){
            cout<<"speed is average";
        }
        else if(speed>50 && speed<=150){
            cout<<"speed is fast";}
            else if(speed>150 && speed<=1000){
                cout<<"speed is ultra fast";}
                else{
                    cout<<"speed is extremely high";
                }
            

        
    
}