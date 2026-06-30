#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int rollNo;
    float marks[5], total = 0, percentage;
    char grade;

    cout << "===== Marksheet Generation System =====" << endl;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "\nEnter marks for 5 subjects (out of 100):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = total / 5;

    // Grade Calculation
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    // Display Marksheet
    cout << "\n========== MARKSHEET ==========" << endl;
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << " Marks : " << marks[i] << endl;
    }

    cout << "-------------------------------" << endl;
    cout << "Total Marks  : " << total << "/500" << endl;
    cout << "Percentage   : " << percentage << "%" << endl;
    cout << "Grade        : " << grade << endl;

    if (grade == 'F')
        cout << "Result       : Fail" << endl;
    else
        cout << "Result       : Pass" << endl;

    return 0;
}