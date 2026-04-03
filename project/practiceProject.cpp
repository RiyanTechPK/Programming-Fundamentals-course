#include<iostream>
#include<conio.h>
using namespace std;
main()
    {
    int totalStudents=1000; //totalSize
    int index=0;
    //data structures;
    string nameArray[totalStudents];
    int ageArray[totalStudents];
    float matricArray[totalStudents];
    float interArray[totalStudents];
    float ecatArray[totalStudents];
    string P1Array[totalStudents];
    string P2Array[totalStudents];
    string P3Array[totalStudents];


    while(true)
    {
    //main header of UMS
    system("cls");
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"--------------Welcome to University Management System------------------"<<endl;
    cout<<"-----------------------------------------------------------------------\n"<<endl;
    
    cout<<"1 Admin\n"
          "2 Student\n"
          "3 Exit\n";
    int option;
    cout<<"Choose your option ";
    cin>>option;
    if(option==1){
    //"enter admin details here"}
    system("cls");
    cout<<" Welcome to admin menu"<<endl;
    
        for(int i=0; i<3; i++){
    cout<<" Enter username \n";
    string username;
    cin>>username;
    cout<<" Enter Password \n";
    int password;
    cin>>password;
    if(username=="admin" && password==123)
    {
        {
    cout<<"succesfully login"<<endl;
    break;
    }
}
    
    while(true)

    {
    cout<<"1. Show all students"<<endl;
    cout<<"2. Search students"<<endl;
    cout<<"3. Update student record"<<endl;
    cout<<"4. Generate merit list"<<endl;
    cout<<"5.Exit"<<endl;
    int adminOption;
    cout<<"Your choice";
    cin>>adminOption;
    if(adminOption==1){
        //show all students
    
    cout<<"name\tage\tmatric\tFSC\tecat\tP1\tP2\tP3";
    for( int i=0; i<index; i++){
      cout<<nameArray[i]<<"\t"<<ageArray[i]<<"\t"<<matricArray[i]<<"\t"<<interArray[i]<<"\t"<<ecatArray[i]<<"\t"<<P1Array[i]<<"\t"<<P2Array[i]
      <<"\t"<<P3Array[i]<<endl;
    }
    
    }else if(adminOption==2){
        //search student
    }else if(adminOption==3){
        //update student record
    }else if(adminOption==4){
        //generate merit list
    }else if(adminOption==5){
    break;
    getch();
    }else{cout<<"You entered the wrong option";}
    }
}
     else{
    cout<<"Your password is incorrect"<< " (attempt "<< i+1<<endl;
    }  

      cout<<" Press any key to continue";
    getch();
    }
        
    else if(option==2){
        //write here the student code
    cout<<" Welcome to UMS\n";
    cout<<" Enter your name : "<<endl;
    string name;
    cin>>name;
    cout<<" Enter your age : "<<endl;
    int age;
    cin>>age;
    cout<<" Enter your matric marks : "<<endl;
    float matric;
    cin>>matric;
    cout<<" Enter your FSc marks : "<<endl;
    float FSc;
    cin>>FSc;
    cout<<" Enter your Ecat marks : "<<endl;
    float ecat;
    cin>>ecat;
    cout<<" Enter CS,SE,EE as your prefrences";
    
    
    cout<<" Your first prefrence :"<<endl;
    string P1;
    cin>> P1;
    
    cout<<" Your second prefrence :"<<endl;
    string P2;
    cin>> P2;
    cout<<" Your third prefrence :"<<endl;
    string P3;
    cin>>P3;

    nameArray[index]=name;
    ageArray[index]=age;
    matricArray[index]=matric;
    interArray[index]=FSc;
    ecatArray[index]=ecat;
    P1Array[index]=P1;
    P2Array[index]=P2;
    P3Array[index]=P3;
    index=index+1;

    cout<<" Your information has saved succesfully";
    getch();
    } 
    
    else if(option==3){
    break;
    }
    else{
        cout<<"You have choose the wrong option";
    }
    }
    cout<<" Thanks for using this software";
    }
}