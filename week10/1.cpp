#include<iostream>
using namespace std;
int add(int a, int b){
     int sum=a+b;
    return sum ;
}
int main(){
    int num1, num2;
    cout<<"enter 1st number";
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;
    
    cout<<add(num1,num2);
    return 0;
}