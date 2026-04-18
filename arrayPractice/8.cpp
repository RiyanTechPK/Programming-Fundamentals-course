#include<iostream>
using namespace std;
main()
{
cout<<"Enter word ";
string word;
cin>>word;
for(int i=0; word[i]!='\0'; i++)
cout<<word[i]<<" is present at position "<<i<<endl;
}