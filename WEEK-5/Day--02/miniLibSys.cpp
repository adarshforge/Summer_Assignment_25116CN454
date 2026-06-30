#include <iostream>
#include <string>
using namespace std;

int main() {
    int bookId[100];
    string bookName[100], author[100];
    int count = 0, choice;

    do {
        cout << "\n====== Mini Library System ======\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter Book ID: ";
                cin >> bookId[count];
                cin.ignore();

                cout << "Enter Book Name: ";
                getline(cin, bookName[count]);

                cout << "Enter Author Name: ";
                getline(cin, author[count]);

                count++;
                cout << "Book Added Successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "\nNo books available!\n";
                } else {
                    cout << "\n------ Book List ------\n";
                    for (int i = 0; i < count; i++) {
                        cout << "Book ID : " << bookId[i] << endl;
                        cout << "Book Name : " << bookName[i] << endl;
                        cout << "Author : " << author[i] << endl;
                        cout << "------------------------\n";
                    }
                }
                break;

            case 3: {
                if (count == 0) {
                    cout << "\nNo books available!\n";
                    break;
                }

                int id;
                cout << "\nEnter Book ID to Search: ";
                cin >> id;

                bool found = false;

                for (int i = 0; i < count; i++) {
                    if (bookId[i] == id) {
                        cout << "\nBook Found!\n";
                        cout << "Book ID : " << bookId[i] << endl;
                        cout << "Book Name : " << bookName[i] << endl;
                        cout << "Author : " << author[i] << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 4:
                cout << "\nThank You for Using the Mini Library System!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}