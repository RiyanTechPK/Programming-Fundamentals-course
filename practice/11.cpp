#include<iostream>
using namespace std;
main(){
    int num,n1=0,n2=1,next;
    cout<< "enter number of fabnnoci series ";
    cin>>num;
    cout<<"0 "<<"1 "<<" ";
    for(int i=0; i<=num; i++){
        next=n1+n2;
        cout<< next <<" ";
        
        n1=n2;n2=next;
    }
}
