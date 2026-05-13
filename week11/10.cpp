#include <iostream>
using namespace std;
int matrix(int column[][5], int rowsize, int sumarray);
main()
{

    int sumarray;
    int row;
    cout << "enter number of rows ";
    cin >> row;
    int column[row][5];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "enter integer at [" << i << "][" << j << "]";
            cin >> column[i][j];
        }
    }
    cout << "original matrix" << endl;
    matrix(column, row, sumarray);
}
int matrix(int column[][5], int rowsize, int sumarray)
{
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << column[i][j] << "\t";
        }
        cout << endl;
    }

     for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < rowsize; j++)
        {
            sum = sum + column[j][i];
        }
        cout<<sum<<endl;
       
       
    }
    
}