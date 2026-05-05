#include<iostream>
using namespace std;
string conversion(int num);


 main()
 {
    cout<<"enter number ";
    int number;
    cin>>number;
    cout<< conversion(number);

 }
 string conversion(int num)

 {
 string ones [] = {" ","one","two","three","four",
    "five","six","seven","eight","nine","ten"};
string tens[]={" "," ", "twenty ","thirty","forty","fifty",
    "sixty","seventy","eighty","ninty"};
    if(num>0 && num<10)
    {
        cout<<ones[num];
    }else if(num>10 && num<100)
    {
       int  num1=num/10; int num2=num%10;
       cout<<tens[num1]<<ones[num2];
    }
}