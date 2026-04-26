#include <iostream>
using namespace std;
main()
{int num;
    int highestno[5];
    //hghest number
    int totalNumber[5];
    for(int i=0; i<5; i++)
    {
        cout<<"enter number\n";
        
        cin>>num;
        highestno[i]=num;
    }
     bool isfound = false;
     highestno[0]=0;
    for(int i=0; i<5; i++)
    {
     
       if(highestno[i]>highestno[0])
       {
        highestno[i]=num;
        isfound=true;
        
       }
    
    }
    if(isfound==true)
    {
    cout<<"highest number "<<num;
    }


}