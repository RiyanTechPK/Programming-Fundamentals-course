#include<iostream>
using namespace std; 
string checkAlphabetcase(char a);
main()
{
cout<<"Enter capital A or small a ";
char a1;
cin>>a1;
if(a1>'a' && a1<'z')
{
    cout<< checkAlphabetcase(a1)<<" small "<< a1;
}
else
{
    cout<< checkAlphabetcase(a1) <<" capital "<< a1;
}
}
string checkAlphabetcase(char a)
{
return  "you have entered" ;
}