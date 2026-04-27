#include <iostream>
using namespace std;
int add(int a, int b);
int main()

{
    for (int i = 0; i < 5; i++)
    {
        cout << " enter first number ";
        int num1;
        cin >> num1;
        cout << " enter second number ";
        int num2;
        cin >> num2;
        cout << "sum is " << add(num1, num2) << endl;
    }
    return 0;
}
int add(int a, int b)
{

    return a + b;
}
