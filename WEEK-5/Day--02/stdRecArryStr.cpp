#include <iostream>
#include <string>
using namespace std;

int main() {
    int roll[100], marks[100];
    string name[100];
    int count = 0, choice;

    do {
        cout << "\n====== Student Record System ======\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> roll[count];
                cin.ignore();

                cout << "Enter Student Name: ";
                getline(cin, name[count]);

                cout << "Enter Marks: ";
                cin >> marks[count];

                count++;
                cout << "Student Record Added Successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "\nNo student records available!\n";
                } else {
                    cout << "\n------ Student Records ------\n";
                    for (int i = 0; i < count; i++) {
                        cout << "Roll Number : " << roll[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;
                        cout << "-----------------------------\n";
                    }
                }
                break;

            case 3: {
                if (count == 0) {
                    cout << "\nNo student records available!\n";
                    break;
                }

                int searchRoll;
                cout << "\nEnter Roll Number to Search: ";
                cin >> searchRoll;

                bool found = false;

                for (int i = 0; i < count; i++) {
                    if (roll[i] == searchRoll) {
                        cout << "\nStudent Found!\n";
                        cout << "Roll Number : " << roll[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Student Record Not Found!\n";

                break;
            }

            case 4:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}