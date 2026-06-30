#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    int bookId[100];
    string title[100];
    string author[100];
    bool issued[100];
    int count = 0;

public:
    void addBook() {
        cout << "\nEnter Book ID: ";
        cin >> bookId[count];
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title[count]);

        cout << "Enter Author Name: ";
        getline(cin, author[count]);

        issued[count] = false;
        count++;

        cout << "Book Added Successfully!\n";
    }

    void displayBooks() {
        if (count == 0) {
            cout << "\nNo books available.\n";
            return;
        }

        cout << "\nBook List\n";
        cout << "---------------------------------------------\n";
        for (int i = 0; i < count; i++) {
            cout << "ID: " << bookId[i]
                 << "\nTitle: " << title[i]
                 << "\nAuthor: " << author[i]
                 << "\nStatus: " << (issued[i] ? "Issued" : "Available")
                 << "\n-----------------------------\n";
        }
    }

    void searchBook() {
        int id;
        cout << "\nEnter Book ID to Search: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                cout << "\nBook Found!\n";
                cout << "Title: " << title[i] << endl;
                cout << "Author: " << author[i] << endl;
                cout << "Status: " << (issued[i] ? "Issued" : "Available") << endl;
                return;
            }
        }

        cout << "Book Not Found!\n";
    }

    void issueBook() {
        int id;
        cout << "\nEnter Book ID to Issue: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                if (!issued[i]) {
                    issued[i] = true;
                    cout << "Book Issued Successfully!\n";
                } else {
                    cout << "Book Already Issued!\n";
                }
                return;
            }
        }

        cout << "Book Not Found!\n";
    }

    void returnBook() {
        int id;
        cout << "\nEnter Book ID to Return: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                if (issued[i]) {
                    issued[i] = false;
                    cout << "Book Returned Successfully!\n";
                } else {
                    cout << "Book Was Not Issued!\n";
                }
                return;
            }
        }

        cout << "Book Not Found!\n";
    }
};

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n====== Library Management System ======\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                lib.addBook();
                break;
            case 2:
                lib.displayBooks();
                break;
            case 3:
                lib.searchBook();
                break;
            case 4:
                lib.issueBook();
                break;
            case 5:
                lib.returnBook();
                break;
            case 6:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 6);

    return 0;
}