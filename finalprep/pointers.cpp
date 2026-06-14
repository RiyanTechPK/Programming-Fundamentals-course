
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50};

    int *p = arr;

    cout << *(p+2) << " ";

    p += 2;

    cout << *(p-1) << " ";

    cout << *(p+1);
}