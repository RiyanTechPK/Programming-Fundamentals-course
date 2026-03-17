#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX_BOOKS = 100;
    string books[MAX_BOOKS];
    bool borrowed[MAX_BOOKS] = {false}; 
    int bookCount = 0;
    int choice;

    do {
        
        cout << "\n===== Library System =====" << endl;
        cout << "1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Books" << endl;
        cout << "4. View Borrowed Status" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore(); 

        switch(choice) {
            case 1: {
                
                if (bookCount >= MAX_BOOKS) {
                    cout << "Library is full. Cannot add more books." << endl;
                    break;
                }
                string bookName;
                cout << "Enter book name to add: ";
                getline(cin, bookName);
                books[bookCount] = bookName;
                borrowed[bookCount] = false;
                bookCount++;
                cout << "Book added successfully!" << endl;
                break;
            }

            case 2:
                
                if (bookCount == 0) {
                    cout << "No books available in the library." << endl;
                } else {
                    cout << "\nList of Books:" << endl;
                    for (int i = 0; i < bookCount; i++) {
                        cout << i+1 << ". " << books[i] << endl;
                    }
                }
                break;

            case 3:
            
                if (bookCount == 0) {
                    cout << "No books available to borrow." << endl;
                    break;
                }
                cout << "\nAvailable Books to Borrow:" << endl;
                for (int i = 0; i < bookCount; i++) {
                    if (!borrowed[i])
                        cout << i+1 << ". " << books[i] << endl;
                }
                int borrowChoice;
                cout << "Enter the book number to borrow: ";
                cin >> borrowChoice;
                if (borrowChoice < 1 || borrowChoice > bookCount || borrowed[borrowChoice-1]) {
                    cout << "Invalid selection or book already borrowed." << endl;
                } else {
                    borrowed[borrowChoice-1] = true;
                    cout << "You have borrowed \"" << books[borrowChoice-1] << "\"." << endl;
                }
                break;

            case 4:
            
                if (bookCount == 0) {
                    cout << "No books in the library." << endl;
                } else {
                    cout << "\nBooks Status:" << endl;
                    for (int i = 0; i < bookCount; i++) {
                        cout << i+1 << ". " << books[i] << " - " 
                             << (borrowed[i] ? "Borrowed" : "Available") << endl;
                    }
                }
                break;

            case 5:
                cout << "Exiting Library System. Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice! Please select 1-5." << endl;
        }

    } while(choice != 5);

    return 0;
}