#include<iostream>
using namespace std;

int sumofPrimaryDiagonal(int matrix[][3],int rowsize);
main()
{
    int rowsize;
    cout<<"Enter rowsize ";
    cin>>rowsize;
    int matrix[rowsize][3];
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter entries ";
            cin>>matrix[i][j];
        }
    }
    cout<<sumofPrimaryDiagonal(matrix, rowsize);


}
int sumofPrimaryDiagonal(int matrix[][3],int rowsize)
{
    int sum=0;
    for(int i=0; i<rowsize; i++)
    {
        sum=sum+matrix[i][i];
    }
    return sum;
}