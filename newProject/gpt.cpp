#include<iostream>
#include<conio.h>
using namespace std;

int main()
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

        cout<<"Enter your choice: ";
        cin>>choice;

        // ✅ ADMIN
        if(choice==1)
        {
            string username; 
            int password;

            for(int i=0; i<3; i++)
            {
                system("cls");
                cout<<"Attempt "<< i+1<<endl;

                cout<<"Enter username: ";
                cin>>username;

                cout<<"Enter password: ";
                cin>>password;

                if(username=="admin" && password==123)
                {
                    cout<<"Successfully login\n";
                    getch();
                    break;
                }
                else
                {
                    cout<<"Wrong credentials\n";
                    getch();
                }
            }
        }

        // ✅ STUDENT
        else if(choice==2)
        {
            while(true)
            {
                system("cls");

                string name; 
                int age; 
                float matric, FSc, ecat;
                string P1, P2, P3;

                cout<<"Enter your name: ";
                cin>>name;

                cout<<"Enter your age: ";
                cin>>age;

                cout<<"Enter your matric marks: ";
                cin>>matric;

                cout<<"Enter your FSc marks: ";
                cin>>FSc;

                cout<<"Enter your ECAT marks: ";
                cin>>ecat;

                cout<<"Enter preferences (CS, SE, EE)\n";

                cout<<"First preference: ";
                cin>>P1;

                cout<<"Second preference: ";
                cin>>P2;

                cout<<"Third preference: ";
                cin>>P3;

                cout<<"Data saved successfully\n";

                getch();
                index++;
                break; // optional (to stop infinite loop)
            }
        }

        // ✅ EXIT
        else if(choice==3)
        {
            cout<<"Exiting program...\n";
            break;
        }

        // ❌ INVALID OPTION
        else
        {
            cout<<"You chose the wrong option\n";
            getch();
        }
    }
}