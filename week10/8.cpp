#include<iostream>
#include<cmath>
using namespace std;
float height(float distance,float degree);
main()
{
     float distance,degree;
    cout<<"Enter horizontal distance ";
    
   
   cin>>distance;
    cout<<"Enter angle of elevation in degrees ";
    cin>>degree;
    
    cout<<"Height is "<<height( distance, degree);
}
float height(float distance, float degree)
{
    return  distance*tan(degree/57.2958);
}