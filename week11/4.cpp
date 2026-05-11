#include <iostream>
using namespace std;

void printCars(int cars[][5], int rowsize);
main()
{
    int cars[5][5] = { {10, 7, 12, 10, 4},
                       {18, 11, 15, 17, 2},
                       {23, 19, 12, 16, 14},
                       {7, 12, 16, 0, 2},
                       {3, 5, 6, 2, 1} };
                       printCars(cars, 5);

                       
}
void printCars(int cars[][5], int rowsize)
{
    for(int i= 0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<cars[i][j]<<"\t";
        }
        cout<<endl;
    }
}

