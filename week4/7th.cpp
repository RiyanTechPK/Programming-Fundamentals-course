#include<iostream>
using namespace std;
main(){
    string shape;
    double l,w,r,h,squareArea,rectangleArea,circleArea,triangleArea;
    cout<<"enter the type of figure ";
    cin>>shape;
    if(shape=="square"){
    cout<<"enter the length ";
    cin>>l;
    squareArea=l*l;
    cout<<"area of square= "<<squareArea;}
    else if(shape=="rectangle")
    {cout<<"enter the length ";
    cin>>l;
    cout<<"enter the width ";
    cin>>w;
    rectangleArea=l*w;
    cout<<"area of rectangle= "<<rectangleArea;}
    else if(shape=="circle"){
        cout<<"enter the radius ";
        cin>>r;
        circleArea=3.1415926*r*r;
        cout<<"area of circle = "<<circleArea;}
        else if(shape=="triangle"){
        cout<<"enter the length ";
        cin>>l;
        cout<<"enter the height ";
        cin>>h;
        triangleArea=(l*h)/2;
        cout<<"area of triangle ="<<triangleArea;}



    


}
    