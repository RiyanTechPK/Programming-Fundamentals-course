#include <iostream>
using namespace std;
void print(int matrix[3][3]);
main()
{
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "enter element at position [" << i << "][" << j << "]";
            cin >> matrix[i][j];
        }
    }
    print(matrix);
}
void print(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    bool isfound = false;
    bool diagonal = false;
    bool other = false;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && matrix[i][j] == 1)
            {
                diagonal = true;
            }
            if (i != j && matrix[i][j] == 0)
            {
                other = true;
            }
        }
    }
    if (diagonal == true && other == true)
    {
        isfound = true;
    }
    if (isfound == true)
    {
        cout << "matrix is identity ";
    }
    else
    {
        cout << "matrix is not identity ";
    }
}