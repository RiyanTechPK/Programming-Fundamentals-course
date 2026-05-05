#include<iostream>
using namespace std;
string symmet(int num1);
bool symmetrical( int num1);
main()

{
cout<<"enter a three digit number ";
int num;
cin>>num;
bool result = symmetrical(num);
if(result == true)
{
    cout<<"number is symmetrical ";
}else{
    cout<<"number is not symmetrical ";
}

}
bool symmetrical  (int num1)
{
    num1%10;
   int  digit1=num1%10;
   int num2=num1/10;
  int digit2=num2%10;
  int num3=num2/10;
  if(num3==digit1)
  {
  return true;
    
  }
  else
  {
   return false;
  } 
}