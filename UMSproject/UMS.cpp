#include <iostream>
#include <conio.h>
using namespace std;
main()
{

    int Total_Students = 100;
    int index = 7;
    // data structures
    string nameArray[Total_Students] = {"Ali", "Ammar", "Sara", "Hassan", "Fatima", "Bilal", "Noor"};
    int ageArray[Total_Students] = {19, 20, 18, 19, 20, 18, 19};
    float matricArray[Total_Students] = {1050, 890, 1020, 970, 1100, 950, 1005};
    float interArray[Total_Students] = {980, 850, 960, 920, 1020, 890, 940};
    float ecatArray[Total_Students] = {350, 280, 330, 300, 370, 295, 310};
    string pref1Array[Total_Students] = {"CE", "CS", "EE", "CS", "CE", "ME", "CS"};
    string pref2Array[Total_Students] = {"CS", "CE", "CS", "EE", "EE", "CE", "EE"};
    string pref3Array[Total_Students] = {"EE", "CS", "ME", "ME", "CS", "CS", "CE"};
    float aggriArray[Total_Students];
    // CRUD Create, read, update, delete

    while (true)
    {
        system("cls");
        // main header
        cout << "-------------------------------------------\n"
                "  UNIVERSITY ADMISSION MANAGEMENT SYSTEM   \n"
                "-------------------------------------------\n";
        cout << " User menu\n";
        cout << " 1. Admin\n"
                " 2. Student\n"
                " 3. Exit\n"
                " Choose option ";
        string userOption;
        cin >> userOption;
        cout << "You choose " << userOption << endl;
        if (userOption == "1")
        {
            // write here the admin code
            int countAttempt = 0;
            for (int i = 0; i < 3; i++)
            {

                system("cls");
                cout << "Admin menu " << "login attempt " << i + 1 << endl;
                cout << "Enter username ";
                string userName;
                cin >> userName;
                cout << "Enter password ";
                int password;
                cin >> password;
                if (userName == "admin" && password == 123)
                {
                    cout << "Successfully login ";
                    while (true)
                    {
                        system("cls");
                        cout << "1 Show all students \n"
                                "2 Search students \n"
                                "3 Update student record \n"
                                "4 Generate merit list \n"
                                "5 Delete\n"
                                "6 logout \n"
                                "Choose option : ";
                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1")
                        {
                            // show student record
                            cout << "Name\tAge\tMatric\tFSc\tECAT\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i]
                                         << "\t" << interArray[i] << "\t" << ecatArray[i] << "\t" << pref1Array[i]
                                         << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // search student by name function
                            cout << "Enter the name you want to search ";
                            string name;
                            cin >> name;
                            bool found = false;

                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }

                            if (found == false)
                            {
                                cout << "Record not found against name " << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSc\tECAT\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex]
                                     << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex]
                                     << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminOption == "3")
                        {
                            // update student record
                            cout << "Enter the name you want to update record of ";
                            string name;
                            cin >> name;
                            bool found = false;

                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "-----old record----\n";
                                cout << "Name\tAge\tMatric\tFSc\tECAT\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex]
                                     << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex]
                                     << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                                cout << "Enter new record for update ";
                                cout << "Enter your name ";
                                string name;
                                cin >> name;
                                cout << "Enter age ";
                                int age;
                                cin >> age;
                                cout << "Enter matric marks ";
                                float matric;
                                cin >> matric;
                                cout << "Enter FSc marks ";
                                float fsc;
                                cin >> fsc;
                                cout << "Enter ECAt marks ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS, CE, EE as your prefrences" << endl;
                                cout << "Enter your 1st pref :";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your 2nd pref :";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd pref :";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found \n";
                            }
                        }
                        else if (adminOption == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArray[i] / 1050.0 * 100.0 * 0.30 + interArray[i] / 1100.0 * 100.0 * 0.40 + ecatArray[i] / 400 * 100 * 0.30;
                                aggriArray[i] = aggri;
                            }
                            // sorting the data on the basis of aggregate
                            for (i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {
                                        // swap operation

                                        // Swapping of name
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // Swapping of age
                                        int tempAge = ageArray[i];
                                        ageArray[i] = ageArray[j];
                                        ageArray[j] = tempAge;

                                        // Swapping of matric marks
                                        int tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // Swapping of inter marks
                                        int tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // Swapping of ecat marks
                                        int tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // Swapping of preference 1
                                        string tempPref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempPref1;

                                        // Swapping of preference 2
                                        string tempPref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempPref2;

                                        // Swapping of preference 3
                                        string tempPref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempPref3;

                                        // Swapping of aggregate
                                        float tempaggri = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempaggri;
                                    }
                                }
                            }

                            // code to display all data with aggregate

                            cout << "Name\tAge\tAggrigate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggriArray[i]
                                         << endl;
                                }
                            }
                            // admit students into disciplie
                        }
                        else if (adminOption == "5")
                        {
                            // delete student record
                            cout << "Enter the name you want to delete record of\n ";
                            string name;
                            cin >> name;
                            bool found = false;

                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << "Record of " << name << " deleted ";
                            }
                            else
                            {
                                cout << "record not found " << endl;
                            }
                        }
                        else if (adminOption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected \n";
                        }
                        cout << " Press any key to continue ";
                        getch();
                    }
                    cout << "press any key to continue ";
                    getch();
                    break;
                }
                else
                {
                    cout << "username or password is invalid " << endl;
                }
                cout << "Press any key to continue " << endl;

                getch();
            }
        }
        else if (userOption == "2")
        {
            // write here the student code
            system("cls");
            cout << "This is student menu \n";
            cout << "Welcome to UMS student menu " << endl;
            cout << "Enter your name ";
            string name;
            cin >> name;
            cout << "Enter age ";
            int age;
            cin >> age;
            cout << "Enter matric marks ";
            float matric;
            cin >> matric;
            cout << "Enter FSc marks ";
            float fsc;
            cin >> fsc;
            cout << "Enter ECAt marks ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS, CE, EE as your prefrences" << endl;
            cout << "Enter your 1st pref :";
            string pref1;
            cin >> pref1;
            cout << "Enter your 2nd pref :";
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd pref :";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index++;
            cout << "Your data has been saved \n";
            cout << "Press any key to continue ";
            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option" << endl;
        }
    } // end of main while loop

    cout << " Thanks for using this software " << endl;
}