#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    float balance;

public:
    void createAccount() {
        cout << "\nEnter Account Number: ";
        cin >> accountNumber;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolder);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit() {
        float amount;
        cout << "\nEnter Amount to Deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Amount Deposited Successfully!\n";
        } else {
            cout << "Invalid Amount!\n";
        }
    }

    void withdraw() {
        float amount;
        cout << "\nEnter Amount to Withdraw: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid Amount!\n";
        } else if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        }
    }

    void checkBalance() {
        cout << "\nCurrent Balance: Rs. " << balance << endl;
    }

    void displayAccount() {
        cout << "\n------ Account Details ------\n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance         : Rs. " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    account.createAccount();

    do {
        cout << "\n====== Bank Account System ======\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.deposit();
                break;
            case 2:
                account.withdraw();
                break;
            case 3:
                account.checkBalance();
                break;
            case 4:
                account.displayAccount();
                break;
            case 5:
                cout << "\nThank You for Using the Bank Account System!\n";
                break;
            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }
    } while (choice != 5);

    return 0;
}