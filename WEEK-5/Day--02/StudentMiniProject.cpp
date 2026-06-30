

//        this project is a Student Management System where users can add, display, search, update, and delete student records





#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int roll[MAX];
string name[MAX];
int marks[MAX];
int countStudents = 0;

// Function to add student
void addStudent()
{
    if (countStudents == MAX)
    {
        cout << "\nRecord is full!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> roll[countStudents];

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name[countStudents]);

    cout << "Enter Marks: ";
    cin >> marks[countStudents];

    countStudents++;

    cout << "\nStudent Record Added Successfully!\n";
}

// Function to display students
void displayStudents()
{
    if (countStudents == 0)
    {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < countStudents; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No : " << roll[i] << endl;
        cout << "Name    : " << name[i] << endl;
        cout << "Marks   : " << marks[i] << endl;
    }
}

// Function to search student
void searchStudent()
{
    int r;
    cout << "\nEnter Roll Number to Search: ";
    cin >> r;

    for (int i = 0; i < countStudents; i++)
    {
        if (roll[i] == r)
        {
            cout << "\nRecord Found!\n";
            cout << "Roll No : " << roll[i] << endl;
            cout << "Name    : " << name[i] << endl;
            cout << "Marks   : " << marks[i] << endl;
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

// Function to update student
void updateStudent()
{
    int r;
    cout << "\nEnter Roll Number to Update: ";
    cin >> r;

    for (int i = 0; i < countStudents; i++)
    {
        if (roll[i] == r)
        {
            cin.ignore();
            cout << "Enter New Name: ";
            getline(cin, name[i]);

            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "\nRecord Updated Successfully!\n";
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

// Function to delete student
void deleteStudent()
{
    int r;
    cout << "\nEnter Roll Number to Delete: ";
    cin >> r;

    for (int i = 0; i < countStudents; i++)
    {
        if (roll[i] == r)
        {
            for (int j = i; j < countStudents - 1; j++)
            {
                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            countStudents--;

            cout << "\nRecord Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}