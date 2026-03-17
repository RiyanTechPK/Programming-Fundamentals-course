#include <iostream>
using namespace std;

int totalDigits(int number) {
    if (number == 0) return 1; 

    int count = 0;
    if (number < 0) number = -number; 

    while (number != 0) {
        number = number / 10; 
        count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digits = totalDigits(num);
    cout << "Total digits in the number: " << digits << endl;

    return 0;
}