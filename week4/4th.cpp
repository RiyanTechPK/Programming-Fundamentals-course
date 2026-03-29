#include<iostream>
using namespace std;
main(){
    float redrose,whiterose,tulip,totalprice, discount;
    cout<<"enter number of red roses ";
    cin>>redrose;
    
    cout<<"enter number of white roses ";
    cin>>whiterose;
    
    cout<<"enter number of tulips ";
    cin>>tulip;
    
    totalprice=(redrose*2.00)+(whiterose*4.1)+(tulip*2.5);
    cout<<"original price = "<<totalprice<<"$"<<endl;
    if(totalprice>200){
        discount=totalprice-20*totalprice/100;
        cout<<"payable amount after discount = "<<discount<<"$";
    }

}