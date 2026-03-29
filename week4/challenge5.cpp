#include<iostream>
using namespace std;
main(){
string name1,name2,name3;
int age1,age2,age3;
cout<<"enter name of 1st brother ";
cin>>name1;
cout<<"enter age of first brother ";
cin>>age1;
cout<<"enter name of 2nd brother ";
cin>>name2;
cout<<"enter age of 2nd brother ";
cin>>age2;
cout<<"enter name of 3rd brother ";
cin>>name3;
cout<<"enter age of 3rd brother ";
cin>>age3;
if(age1<age2 && age1<age3)
{cout<<"  "<<name1;}
else if(age2<age1 && age2<age3)
{cout<<"  "<<name2;}
else{cout<<"  "<<name3;}
}