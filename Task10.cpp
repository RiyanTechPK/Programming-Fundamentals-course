#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;
    int temp = (number < 0) ? -number : number; 

    while (temp != 0) {
        int digit = temp % 10; 
        sum += digit;         
        temp = temp / 10;      
    }

    cout << "Sum of digits of " << number << " is: " << sum << endl;

    return 0;
}