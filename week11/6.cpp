#include<iostream>
using namespace std; 
void printsum(int matrix[][3],int rowsize);

main()

{
    int rows;
    cout<<"enter number of rows ";
    
    cin>>rows;
  int matrix[rows][3];
  
  
    for(int i=0; i<rows; i++)
    {
        for(int j=0;j<3; j++)
        {
            cout<<"Enter element at position no ["<<i<<"]["<<j<<"]";
            cin>>matrix[i][j];
        }
    }
            printsum(matrix,rows);


}
void printsum(int matrix[][3],int rowsize)
{
    int sum =0;
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<3;j++)
        {
            sum = sum +matrix[i][j];
        }
    }
    cout<<sum;

}