#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int totalStudents=1000;
    int index=0;

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
        system("cls");
        cout<<"---------------------------------------------"<<endl;
        cout<<"---- University Management System -----------"<<endl;
        cout<<"---------------------------------------------\n"<<endl;

        cout<<"1 Admin\n2 Student\n3 Exit\n";

        int option;
        cout<<"Choose your option: ";
        cin>>option;

        // ================= ADMIN =================
        if(option==1)
        {
            system("cls");
            cout<<"Welcome to Admin Menu"<<endl;

            bool loginSuccess = false;

            for(int i=0; i<3; i++)
            {
                string username;
                int password;

                cout<<"Enter username: ";
                cin>>username;
                cout<<"Enter password: ";
                cin>>password;

                if(username=="admin" && password==123)
                {
                    cout<<"Successfully logged in\n";
                    loginSuccess = true;
                    break;
                }
                else
                {
                    cout<<"Wrong credentials (Attempt "<<i+1<<")\n";
                }
            }

            // Only enter admin menu if login successful
            if(loginSuccess)
            {
                while(true)
                {
                    cout<<"\n1. Show all students"<<endl;
                    cout<<"2. Search student"<<endl;
                    cout<<"3. Update student"<<endl;
                    cout<<"4. Generate merit list"<<endl;
                    cout<<"5. Exit"<<endl;

                    int adminOption;
                    cout<<"Your choice: ";
                    cin>>adminOption;

                    if(adminOption==1)
                    {
                        cout<<"Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3\n";
                        for(int i=0; i<index; i++)
                        {
                            cout<<nameArray[i]<<"\t"<<ageArray[i]<<"\t"
                                <<matricArray[i]<<"\t"<<interArray[i]<<"\t"
                                <<ecatArray[i]<<"\t"<<P1Array[i]<<"\t"
                                <<P2Array[i]<<"\t"<<P3Array[i]<<endl;
                        }
                    }
                    else if(adminOption==5)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Invalid option\n";
                    }
                }
            }

            getch();
        }

        // ================= STUDENT =================
        else if(option==2)
        {
            system("cls");

            string name, P1, P2, P3;
            int age;
            float matric, FSc, ecat;

            cout<<"Enter your name: ";
            cin>>name;

            cout<<"Enter your age: ";
            cin>>age;

            cout<<"Enter matric marks: ";
            cin>>matric;

            cout<<"Enter FSc marks: ";
            cin>>FSc;

            cout<<"Enter Ecat marks: ";
            cin>>ecat;

            cout<<"Enter preferences (CS/SE/EE)\n";

            cout<<"First preference: ";
            cin>>P1;

            cout<<"Second preference: ";
            cin>>P2;

            cout<<"Third preference: ";
            cin>>P3;

            nameArray[index]=name;
            ageArray[index]=age;
            matricArray[index]=matric;
            interArray[index]=FSc;
            ecatArray[index]=ecat;
            P1Array[index]=P1;
            P2Array[index]=P2;
            P3Array[index]=P3;

            index++;

            cout<<"Data saved successfully!";
            getch();
        }

        // ================= EXIT =================
        else if(option==3)
        {
            break;
        }

        else
        {
            cout<<"Invalid option\n";
            getch();
        }
    }

    cout<<"Thanks for using this software";
}