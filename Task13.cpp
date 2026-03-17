#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int N;         
    double P;      
    double X;       
    cout << "Enter Lilly's age: ";
    cin >> N;
    cout << "Enter price of each toy: ";
    cin >> P;
    cout << "Enter price of washing machine: ";
    cin >> X;

    int toysCount = 0;      
    double moneySaved = 0;  

    for (int age = 1; age <= N; age++) {
        if (age % 2 != 0) {
            
            toysCount++;
        } else {
            
            double moneyReceived = (age / 2) * 10; 
            moneyReceived -= 1;                    
            moneySaved += moneyReceived;
        }
    }


    moneySaved += toysCount * P;

    cout << fixed << setprecision(2);
    cout << "Total money Lilly has: $" << moneySaved << endl;

    if (moneySaved >= X) {
        cout << "Lilly can buy the washing machine!" << endl;
        cout << "Money left after purchase: $" << moneySaved - X << endl;
    } else {
        cout << "Lilly cannot buy the washing machine." << endl;
        cout << "She needs $" << X - moneySaved << " more." << endl;
    }

    return 0;
}