#include<iostream>
using namespace std;
main(){
int num;
cout<<"enter four digit number ";
cin>>num;
int num1,num2,num3,num4,number1,number2,number3,number4;
num1=num%10;
number1=num/10; 
num2=number1%10;
number2=number1/10;
num3=number2%10;
number3=number2/10;
cout<<"sum of four digits = "<<num1+num2+num3+number3;}
