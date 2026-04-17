#include<iostream>
using namespace std;
main(){
    int n;
    cout<<" how many numbers you want to enter ";
    cin>>n;
    int num[n];
    for(int i=0;i<n; i++){
        cout<<"enter number "<<i+1<<" ";
        cin>>num[i];

    }
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
}