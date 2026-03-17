#include <iostream>
using namespace std;

// Function to find frequency of a digit in a number
int frequencyChecker(int number, int digit) {
    if (digit < 0 || digit > 9) {
        cout << "Invalid digit! Must be 0-9." << endl;
        return -1;
    }

    int count = 0;
    if (number < 0) number = -number; // Handle negative numbers

    while (number != 0) {
        int lastDigit = number % 10; // Get last digit
        if (lastDigit == digit) {
            count++;
        }
        number = number / 10; // Remove last digit
    }

    return count;
}

int main() {
    int num, digit;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the digit to find frequency: ";
    cin >> digit;

    int freq = frequencyChecker(num, digit);
    if (freq != -1) {
        cout << "Frequency of " << digit << " in " << num << " is: " << freq << endl;
    }

    return 0;
}