#include<iostream>
#include<cmath>
using namespace std;
float height(float base, float degreeAngle);

int main()
{float base1, degree;
    cout<<"enter base ";
    cin>>base1;
    cout<<"Enter angle in degree ";
    cin>>degree;
  cout<<"height is "<<height(base1, degree);
  return 0;
}
float height(float base, float degreeAngle){
    float h=base*tan(degreeAngle/57.3);
    return h;
}