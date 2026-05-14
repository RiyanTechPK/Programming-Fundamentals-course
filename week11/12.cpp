#include<iostream>
using namespace std;
int sumofsecondarydiagonals(int matrix[][3],int size);

main()

{
    int size;
    cout<<"enter row size";
    cin>>size;
    int matrix[size][3];
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"enter entry ";
            cin>>matrix[i][j];
        }
    }
   cout<< sumofsecondarydiagonals(matrix,size);

}
int sumofsecondarydiagonals(int matrix[][3],int size)
{
    int row =0;
    int sum =0;
    int col = size-1;
    for(int i=0; i<size; i++)
    {
        sum =sum + matrix[row][col];
        row ++;
        col --;
    }
    return sum;
}