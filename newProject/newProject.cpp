#include<iostream>
#include<conio.h>
using namespace std;
main()
{ 
    int totalStudents=1000;
    string nameArray[totalStudents];
    int agrArray[totalStudents];
    float matricArray[totalStudents];
    float FScArray[totalStudents];
    float ecatArray[totalStudents];
    string P1Array[totalStudents];
    string P2Array[totalStudents];
    string P3Array[totalStudents];
    int index=0;
    while(true)
{
        system("cls");
    cout<<"--------------------------------------------------------\n";
    cout<<"    --------UNIVERSITY MANAGEMENT SYSTEM--------\n";
    cout<<"--------------------------------------------------------\n";
    int choice;
    cout<<"Welcome to main menu\n";
     
    cout<<"1. Admin\n";
    cout<<"2. Student\n";
    cout<<"3. Exit\n";
    //admin details enter here
    
    if(choice==1)
    
    {
        
            
        string username; int password;
        
        for(int i=0; i<3; i++)
            {
                system("cls");
                cout<<" Attempt "<< i+1<<endl;
            
              
        cout<<"Enter username\n";
        cin>>username;
        cout<<"Enter Pssword\n";
        cin>>password;
        if(username=="admin" && password==123)
        {
            cout<<"Succesfully login\n";
            break;
            getch();
        }
        else
        {
        cout<<"You entered wrong credentials\n";
        cout<<"Press any key to move back\n";
        getch();
        }  
      
    }
} 

    


    
    //student details enter here
     else if(choice==2)
   
       while(true)
    {  system("cls");
        cout<<"Welcome to UMS\n";
        string name; int age; float matric; float FSc; float ecat;
        string P1,P2,P3;
        cout<<"Enter your name :\n";
        cin>>name;
        cout<<"Enter your age :\n";
        cin>>age;
        cout<<"Enter ypur matric marks :\n";
        cin>>matric;
        cout<<"Enter your FSc marks\n";
        cin>>FSc;
        cout<<"Enter your ecat marks\n";
        cin>>ecat;
        cout<<"Enter prefrences CS,SE,EE\n";
        cout<<"Enter your first preference\n";
        cin>>P1;
        cout<<"Enter your second preference\n";
        cin>>P2;
        cout<<"Enter your third preference\n";
        cin>>P3;
        cout<<"Your data has been saved succesfully\n";
        
        getch();
        index++;
    }
    

    
        else if(choice==3)
        {

         cout<<"exit";
        
        }
        else
        {
        cout<<"You have  choose the wrong option";
        }
    
}  
}