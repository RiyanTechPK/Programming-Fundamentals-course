#include<iostream>
#include<cmath>
using namespace std;
main(){
    int holidays,workingdays,gametime,normdifference;
    cout<<"enter number of holydays ";
    cin>>holidays;
    workingdays=365-holidays;
    gametime=(holidays*127 + workingdays*63);
    normdifference=30000-gametime;
    if(gametime<=30000){
        cout<<"tom can sleep well\n";}
        else
        {cout<< "tom can run away"<<endl;
    }
    cout<<"difference from norm = "<<abs(normdifference/60)<<"hours"<<abs(normdifference%60)<<"minutes";
}