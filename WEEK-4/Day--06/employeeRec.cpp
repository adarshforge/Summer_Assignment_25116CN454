#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    int empID;
    string empName, department;
    float salary;

    do {
        cout << "\n===== Employee Management System =====" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employee" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> empID;
                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, empName);

                cout << "Enter Department: ";
                getline(cin, department);

                cout << "Enter Salary: ";
                cin >> salary;

                cout << "\nEmployee record added successfully!" << endl;
                break;

            case 2:
                cout << "\n===== Employee Record =====" << endl;
                cout << "Employee ID : " << empID << endl;
                cout << "Name        : " << empName << endl;
                cout << "Department  : " << department << endl;
                cout << "Salary      : Rs. " << salary << endl;
                break;

            case 3:
                cout << "\nExiting the program..." << endl;
                break;

            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }

    } while (choice != 3);

    return 0;
}