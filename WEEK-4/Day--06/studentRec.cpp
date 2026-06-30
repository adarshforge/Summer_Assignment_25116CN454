#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int rollNo;
    float marks;
    int choice;

    do {
        cout << "\n===== Student Record Management System =====" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display Student Record" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> rollNo;
                cin.ignore();

                cout << "Enter Student Name: ";
                getline(cin, name);

                cout << "Enter Marks: ";
                cin >> marks;

                cout << "Student record added successfully!" << endl;
                break;

            case 2:
                cout << "\n===== Student Record =====" << endl;
                cout << "Roll Number : " << rollNo << endl;
                cout << "Name        : " << name << endl;
                cout << "Marks       : " << marks << endl;
                break;

            case 3:
                cout << "Exiting the program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 3);

    return 0;
}