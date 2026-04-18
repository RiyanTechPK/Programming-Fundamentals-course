#include<iostream>
using namespace std;
main(){
    string word;
    cout<<"enter word ";
    cin>>word;
     int i=0;
     while(word[i]!='\0'){
        i++;
     }
     for(int j=i-1; j>=0; j--){
        cout<<word[j];
     }
}