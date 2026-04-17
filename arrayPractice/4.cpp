#include<iostream>
using namespace std;
main(){
    int num[5];
    for(int i=0; i<5; i++){
        cout<<"enter number "<<i+1<<endl;
        cin>>num[i];

    }
    cout<<num[0]<<" "<<num[4];
}