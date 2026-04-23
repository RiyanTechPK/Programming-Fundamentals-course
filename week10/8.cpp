#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a1,b1,c1;
    cout<<"enter coefficient of square x ";
    cin>>a1;
    cout<<"enter coefficient of x ";
    cin>>b1;
    cout<<"enter constant ";
    cin>>c1;
    float det;
    det=b1*b1 - 4*a1*c1;
    if(det>0){
        cout<<"two real roots are\n",
        cout<< (-b1 + sqrt(b1*b1 - 4*a1*c1))/(2*a1)<<endl;
        cout<< (-b1 - sqrt(b1*b1 - 4*a1*c1))/(2*a1)<<endl;
    }
    if(det==0){
        cout<<"one real root \n";
        cout<<-b1/(2*a1);
    }if(det<0){
        cout<<"Two imaginary roots \n";
        cout<<b1/2*a1 +(sqrt(b1*b1 - 4*a1*c1))/(2*a1)<<endl;
        cout<<-b1/2*a1 + (sqrt(b1*b1 - 4*a1*c1))/(2*a1)<<endl;
    }
return 0;

}
