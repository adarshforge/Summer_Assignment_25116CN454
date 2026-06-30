#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    do {
        cout << "\n====== Menu-Driven String Operations System ======\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find String Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Convert to Uppercase\n";
        cout << "6. Convert to Lowercase\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "\nEnter a String: ";
                getline(cin, str);
                cout << "String Stored Successfully!\n";
                break;

            case 2:
                if (str.empty())
                    cout << "No string available!\n";
                else
                    cout << "String: " << str << endl;
                break;

            case 3:
                if (str.empty())
                    cout << "No string available!\n";
                else
                    cout << "Length of String = " << str.length() << endl;
                break;

            case 4:
                if (str.empty()) {
                    cout << "No string available!\n";
                } else {
                    string rev = str;
                    reverse(rev.begin(), rev.end());
                    cout << "Reversed String: " << rev << endl;
                }
                break;

            case 5:
                if (str.empty()) {
                    cout << "No string available!\n";
                } else {
                    string upper = str;
                    for (int i = 0; i < upper.length(); i++)
                        upper[i] = toupper(upper[i]);
                    cout << "Uppercase String: " << upper << endl;
                }
                break;

            case 6:
                if (str.empty()) {
                    cout << "No string available!\n";
                } else {
                    string lower = str;
                    for (int i = 0; i < lower.length(); i++)
                        lower[i] = tolower(lower[i]);
                    cout << "Lowercase String: " << lower << endl;
                }
                break;

            case 7:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}