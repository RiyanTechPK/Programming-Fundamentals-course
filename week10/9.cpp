#include<iostream>
#include<cmath>
using namespace std;

double root(double a, double b, double c);
main()
{
    for(int i=0; i<3; i++)
    {double a1,b1,c1;
    
    cout<<"Enter coefficient of x square ";
    cin>>a1;
    cout<<"Enter coefficient of x ";
    cin>>b1;
    cout<<"Enter constant ";
    cin>>c1;
   
    if(root(a1,b1,c1)>0)
    {
       cout<<"root1 "<<(-b1/(2*a1)) + (sqrt( root(a1,b1,c1)))/(2*a1)<<endl;
       cout<<"root2 "<<(-b1/(2*a1))- (sqrt( root(a1,b1,c1)))/(2*a1)<<endl;
    }
    else if(root(a1,b1,c1)==0)
    {
        cout<<"root "<< -b1/(2*a1)<<endl;
    }
    else
    {
        cout<<"root1 "<<(-b1/(2*a1)) + (sqrt((- root(a1,b1,c1))))/(2*a1)<<"i"<<endl;
       cout<<"root2 "<<(-b1/(2*a1) )- (sqrt((-root(a1,b1,c1))))/(2*a1)<<"i"<<endl;
    }
}

}
double root(double a ,double b, double c)
{
    return b*b -4*a*c;
}