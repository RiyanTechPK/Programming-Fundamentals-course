#include<iostream>
using namespace std; 
void printCars( int cars[][5], int rowsize);
void redcars( int cars[][5]);
void nissancars(int cars[][5]);
void converter(int cars[][5], string colour);
void matrix(int cars[][5]);
main()

{

    int cars[5][5] = { {10, 7, 12, 10, 4},
                       {18, 11, 15, 17, 2},
                       {23, 19, 12, 16, 14},
                       {7, 12, 16, 0, 2},
                       {3, 5, 6, 2, 1} };
                       printCars(cars,5);
                       cout<<endl;
                       redcars(cars);
                       cout<<endl;
                       nissancars(cars);
                       cout<<endl;
                       cout<<"enter colour ";
                       string colour;
                       cin>>colour;
                       converter(cars,colour);
                       cout<<endl;
                       matrix(cars);
                       
}
void printCars( int cars[][5], int rowsize)
{
   int row=1;
   int col=3;
    cout<<cars[row][col];
    
}


    void redcars(int cars[][5])
    {
        int sum =0;
        for(int j=0; j<5; j++)
    {for(int i=0; i<5; i++)
    {
        
        sum = sum + cars[i][j];
    }
    cout<<sum;
    break;
    }
}
void nissancars(int cars[][5])
{
    int sum=0;
    for(int i=2; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            sum =sum + cars[i][j];
            

        }
        cout<<sum;
        break;
    }
}
void converter(int cars[][5], string colour)
{
    if(colour == "red")
    {
        int sum=0;
        for(int j=0; j<5; j++)
        {
            for(int i=0; i<5; i++)
            {
                sum =sum+cars[i][j];
            }
            cout<<sum;
            break;
        }
    }
    if(colour == "black")
    {
        int sum=0;
        for(int j=1; j<5; j++)
        {
            for(int i=0; i<5; i++)
            {
                sum =sum+cars[i][j];
            }
            cout<<sum;
            break;
        }
    }
    if(colour == "brown")
    {
        int sum=0;
        for(int j=2; j<5; j++)
        {
            for(int i=0; i<5; i++)
            {
                sum =sum+cars[i][j];
            }
            cout<<sum;
            break;
        }
    }
    if(colour == "blue")
    {
        int sum=0;
        for(int j=3; j<5; j++)
        {
            for(int i=0; i<5; i++)
            {
                sum =sum+cars[i][j];
            }
            cout<<sum;
            break;
        }
    }
    if(colour == "grey")
    {
        int sum=0;
        for(int j=4; j<5; j++)
        {
            for(int i=0; i<5; i++)
            {
                sum =sum+cars[i][j];
            }
            cout<<sum;
            break;
        }
    }
}
void matrix(int cars[][5])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<cars[j][i]<<"\t";
        }
        cout<<endl;
    }
}

