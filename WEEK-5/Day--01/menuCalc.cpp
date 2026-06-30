#include <iostream>
using namespace std;

int main() {
    int choice;
    int num1, num2;

    do {
        cout << "\n====== Menu-Driven Calculator ======\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Result = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Result = " << num1 * num2 << endl;
                break;

            case 4:
                if (num2 != 0)
                    cout << "Result = " << (float)num1 / num2 << endl;
                else
                    cout << "Error! Division by zero is not allowed.\n";
                break;

            case 5:
                if (num2 != 0)
                    cout << "Result = " << num1 % num2 << endl;
                else
                    cout << "Error! Modulus by zero is not allowed.\n";
                break;

            case 6:
                cout << "Thank You for Using the Calculator!\n";
                break;

            default:
                cout << "Invalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}