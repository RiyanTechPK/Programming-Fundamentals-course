# include <iostream>
using namespace std;
main(){ int length;
    cout<<"enter the length of fibonacci series ";
    cin>>length;
    cout<<"0";
    cout<<"1";
    int x=0,y=1,next;
    int i=2;
    while(i<length){
        next=x+y;
        
        cout<< next ;
        x=y; y=next;  
   
               i++;}
   
}