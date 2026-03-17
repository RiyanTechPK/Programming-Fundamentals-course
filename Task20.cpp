#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols = 3;

    for (int i = 0; i < rows; i++) {        
        for (int j = 1; j <= cols; j++) { 
            cout << j << " ";
        }
        cout << endl;                        
    }

    return 0;
}