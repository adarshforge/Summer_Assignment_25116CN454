#include <iostream>
#include <string>
using namespace std;

int main() {
    int empId[100];
    string empName[100], department[100];
    float salary[100];
    int count = 0, choice;

    do {
        cout << "\n====== Mini Employee Management System ======\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> empId[count];
                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, empName[count]);

                cout << "Enter Department: ";
                getline(cin, department[count]);

                cout << "Enter Salary: ";
                cin >> salary[count];

                count++;
                cout << "Employee Added Successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "\nNo employee records available!\n";
                } else {
                    cout << "\n------ Employee Records ------\n";
                    for (int i = 0; i < count; i++) {
                        cout << "Employee ID : " << empId[i] << endl;
                        cout << "Name        : " << empName[i] << endl;
                        cout << "Department  : " << department[i] << endl;
                        cout << "Salary      : " << salary[i] << endl;
                        cout << "-------------------------------\n";
                    }
                }
                break;

            case 3: {
                if (count == 0) {
                    cout << "\nNo employee records available!\n";
                    break;
                }

                int id;
                bool found = false;

                cout << "\nEnter Employee ID to Search: ";
                cin >> id;

                for (int i = 0; i < count; i++) {
                    if (empId[i] == id) {
                        cout << "\nEmployee Found!\n";
                        cout << "Employee ID : " << empId[i] << endl;
                        cout << "Name        : " << empName[i] << endl;
                        cout << "Department  : " << department[i] << endl;
                        cout << "Salary      : " << salary[i] << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee Not Found!\n";

                break;
            }

            case 4:
                cout << "\nThank You for Using the Mini Employee Management System!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}