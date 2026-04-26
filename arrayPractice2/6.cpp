#include<iostream>
using namespace std;
main()
{
    int array[5];
    for(int i=1; i<=5;i++)
    {
        cout<<"enter number ";
        int num; 
        cin>>num;
        array[i]=num;
    }
    array[0]={0};
    
    int highestno=0;
    for(int j=1; j<=5; j++)
    {
        if(array[j]>highestno)
        {
            highestno=array[j];
        }
    }
    int secondhighestno=0;
    for(int k=1;k<5;k++)
    {
        if(array[k]>secondhighestno  && array[k]<highestno)
        {
            secondhighestno=array[k];
        }
    }
     int thirdhighestno=0;
    for(int k=1;k<5;k++)
    {
        if(array[k]>thirdhighestno  && array[k]<highestno && array[k]<secondhighestno)
        {
            thirdhighestno=array[k];
        }
    }cout<<thirdhighestno;
    
}
