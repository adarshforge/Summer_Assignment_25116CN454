#include <iostream>
#include <string>
using namespace std;

class Inventory {
private:
    int productId[100];
    string productName[100];
    int quantity[100];
    float price[100];
    int count = 0;

public:
    void addProduct() {
        cout << "\nEnter Product ID: ";
        cin >> productId[count];
        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName[count]);

        cout << "Enter Quantity: ";
        cin >> quantity[count];

        cout << "Enter Price: ";
        cin >> price[count];

        count++;
        cout << "Product Added Successfully!\n";
    }

    void displayProducts() {
        if (count == 0) {
            cout << "\nNo products available!\n";
            return;
        }

        cout << "\n------ Product List ------\n";
        for (int i = 0; i < count; i++) {
            cout << "Product ID : " << productId[i] << endl;
            cout << "Name       : " << productName[i] << endl;
            cout << "Quantity   : " << quantity[i] << endl;
            cout << "Price      : Rs. " << price[i] << endl;
            cout << "--------------------------\n";
        }
    }

    void searchProduct() {
        int id;
        cout << "\nEnter Product ID to Search: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (productId[i] == id) {
                cout << "\nProduct Found!\n";
                cout << "Name     : " << productName[i] << endl;
                cout << "Quantity : " << quantity[i] << endl;
                cout << "Price    : Rs. " << price[i] << endl;
                return;
            }
        }

        cout << "Product Not Found!\n";
    }

    void updateQuantity() {
        int id, newQty;

        cout << "\nEnter Product ID: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (productId[i] == id) {
                cout << "Enter New Quantity: ";
                cin >> newQty;

                quantity[i] = newQty;
                cout << "Quantity Updated Successfully!\n";
                return;
            }
        }

        cout << "Product Not Found!\n";
    }
};

int main() {
    Inventory inv;
    int choice;

    do {
        cout << "\n====== Inventory Management System ======\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inv.addProduct();
                break;
            case 2:
                inv.displayProducts();
                break;
            case 3:
                inv.searchProduct();
                break;
            case 4:
                inv.updateQuantity();
                break;
            case 5:
                cout << "\nThank You for Using the Inventory Management System!\n";
                break;
            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}