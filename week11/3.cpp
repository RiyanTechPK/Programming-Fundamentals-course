#include<iostream>
using namespace std;
int main()
{
    
    cout<<"how many rows";
    int rows; 
    cin>>rows;
    cout<<"how many columns ";
    int cols;
    cin>>cols;
    int matrix[rows][cols];

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<"enter number";
            cin>>matrix[i][j];
        }
    }
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
     
}


    
