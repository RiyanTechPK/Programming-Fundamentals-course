#include<iostream>
using namespace std;
main()
{
    int busseats[65];
     int num;
    int i=0;
    while(i<65)
    {
        busseats[i]=0;
        i++;
    }
    
    for(int j=0;j<65; j++){
    cout<<"enter seat number ";
   cin>>num;
    
    
    if(busseats[num-1]==0)
    {
        
        cout<<"seat available\n";
         busseats[num-1]=1;

    }else{
        cout<<"seat is booked\n";
    }
 } 
}