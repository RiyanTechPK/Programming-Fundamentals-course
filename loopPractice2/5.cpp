#include <iostream>
using namespace std;
main()
{
    for(int i=0; i<2; i++)
    {
        for(int j=2; j>=i; j--){
            cout<<" ";
        }
        cout<<"/";
        for(int k=0;k<=i; k++){
        cout<<"\\";
        for(int l=0;l<=i+1;l++){
    cout<<" ";}
        cout<<endl;}

    }
        

    }

