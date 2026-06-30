#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    int empID;
    string empName;
    float basicSalary, bonus, deduction, netSalary;

    do {
        cout << "\n===== Salary Management System =====" << endl;
        cout << "1. Enter Employee Salary Details" << endl;
        cout << "2. Display Salary Details" << endl;
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

                cout << "Enter Basic Salary: ";
                cin >> basicSalary;

                cout << "Enter Bonus: ";
                cin >> bonus;

                cout << "Enter Deduction: ";
                cin >> deduction;

                netSalary = basicSalary + bonus - deduction;

                cout << "\nSalary details saved successfully!" << endl;
                break;

            case 2:
                cout << "\n===== Salary Details =====" << endl;
                cout << "Employee ID   : " << empID << endl;
                cout << "Employee Name : " << empName << endl;
                cout << "Basic Salary  : Rs. " << basicSalary << endl;
                cout << "Bonus         : Rs. " << bonus << endl;
                cout << "Deduction     : Rs. " << deduction << endl;
                cout << "Net Salary    : Rs. " << netSalary << endl;
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