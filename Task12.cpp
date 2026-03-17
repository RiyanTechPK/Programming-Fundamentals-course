#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of subjects: ";
    cin >> n;

    vector<float> marks(n); 
    float total = 0;
    float maxMarks = 100; 

    cout << "Enter marks obtained in each subject:\n";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    float percentage = (total / (n * maxMarks)) * 100;

    cout << "Total Marks: " << total << " out of " << n * maxMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}