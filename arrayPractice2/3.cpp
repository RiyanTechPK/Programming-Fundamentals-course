#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int totalSeats[5];
    int seatAvailability[5];
    int seatno[5];
    int bookedSeats[5];
    string nameArray[5];
    int option;
    string name;
    for (int i = 0; i < 5; i++)
        {
            seatAvailability[i] = 0;
        }
    while (true)
    {
        system("cls");
        cout << "1. seat availability  \n ";
        cout << "2. check seat status \n ";
        cout << "3.booked seats \n";
        cout << "enter your option ";
        cin >> option;

        

        int num;
        if (option == 1)
        {

            for(int j=0; j<5; j++)

            {
                cout << "Enter seat number \n";
                cin >> num;
                seatno[j]=num;
                bookedSeats[j]=num;
                

                if (seatAvailability[j] == 0)

                {
                     
                    cout << "Enter your name\n";

                    cin >> name;
                    nameArray[j] = name;

                    cout << "You have booked seat " <<num << endl;
                    
                    

                    seatAvailability[j] = 1;
break;
                   
                }
                else
                {
                    cout << "seat already booked\n";
                }

                cout << "press any key to continue\n";

                getch();
                break;
            }
        }

        else if (option == 2)
        {
            cout << "name " << "\t" << "seat " << endl;
            for (int k = 0; k < 5; k++)
            {seatno[k] = num;
               

                cout << nameArray[k ] << "\t" << seatno[k ] << endl;
                cout << "Press any key to continue\n";
                break;
            }
            getch();
        }

        else if (option == 3)
        {
            cout << "booked seats \n";


            
    
               int count =0;
               
for(int k=0;k<5; k++)
if(seatAvailability[k]==1){
                cout  <<bookedSeats[k] << endl;
                count ++;
                break;}
               
                
            }
            getch();
        }
    }
