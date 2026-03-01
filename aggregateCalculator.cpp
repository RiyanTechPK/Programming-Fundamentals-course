#include<iostream>
using namespace std;
main(){
string name;
cout<<"enter your name: " ;
cin>> name;
float matricMarks,  ecatMarks, intermediateMarks;
cout<<"enter your matric marks: ";
cin>>  matricMarks ;
cout<<"enter your intermediate marks: ";
cin>>  intermediateMarks ;
cout<< "enter your ecat marks: ";
cin>> ecatMarks;
float aggregate;
aggregate=(10*(matricMarks/1100))+(40*(intermediateMarks/555))+(50*(ecatMarks/400));
cout<<" your aggregate is : " <<aggregate;}