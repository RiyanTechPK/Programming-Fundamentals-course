#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double inheritedMoney;
    int endYear;
    
    cout << "Enter inherited money: ";
    cin >> inheritedMoney;
    
    cout << "Enter year until which he has to live: ";
    cin >> endYear;
    
    int age = 18;       
    double totalSpent = 0;

    for (int year = 1800; year <= endYear; year++) {
        if (year % 2 == 0) {
            
            totalSpent += 12000;
        } else {
            
            totalSpent += 12000 + 50 * (age + 1); 
        }
        age++; 
    }

    double remaining = inheritedMoney - totalSpent;

    cout << fixed << setprecision(2);
    if (remaining >= 0) {
        cout << "Yes! He will live a carefree life and will have " 
             << remaining << " dollars left." << endl;
    } else {
        cout << "He will need " << -remaining << " dollars to survive." << endl;
    }

    return 0;
}