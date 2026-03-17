#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    do {
        
        cout << "\n===== Simple Calculator =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Exiting Calculator. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please select 1, 2, or 3." << endl;
        }

    } while(choice != 3);

    return 0;
}