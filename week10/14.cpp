#include<iostream>
using namespace std;
void check(int flow1,int flow2,float hour, int volume);

main()
{
        int litters, flowa, flowb;
        float hours;
        
    cout<<"volume of pool in litters ";

    cin>>litters;
    cout<<"rate flow of pipe one ";
   
    cin>>flowa;
    cout<<"rate flow of pipe second ";
    
    cin>>flowb;
    cout<<"absent hours of worker ";
    
    cin>>hours;
    check(flowa,flowb,hours,litters);
}
void check(int flow1, int flow2 ,float hour, int volume)
{
 float totalWater = (flow1+flow2)*hour;
 if(totalWater<=volume)
 {
    float poolfillpercentage=(totalWater/volume)*100;
    float pipe1percentage=(flow1*hour/totalWater)*100;
    float pipe2percentage=(flow2*hour/totalWater)*100;
         cout<< poolfillpercentage<<endl;
          cout<< pipe1percentage<<endl;
          cout<< pipe2percentage<<endl;
 }
 else
 {
    float overflow=totalWater-volume;
    cout<< overflow;
 }
 
}
 
