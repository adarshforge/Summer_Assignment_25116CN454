#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0;
    int choice, i, key, max, min, sum;

    do {
        cout << "\n====== Menu-Driven Array Operations System ======\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Search Element\n";
        cout << "4. Find Maximum Element\n";
        cout << "5. Find Minimum Element\n";
        cout << "6. Calculate Sum of Elements\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter number of elements: ";
                cin >> n;

                cout << "Enter " << n << " elements:\n";
                for (i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                cout << "Array Created Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "Array is empty!\n";
                } else {
                    cout << "\nArray Elements: ";
                    for (i = 0; i < n; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                if (n == 0) {
                    cout << "Array is empty!\n";
                    break;
                }

                cout << "Enter element to search: ";
                cin >> key;

                for (i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << "Element found at position " << i + 1 << endl;
                        break;
                    }
                }

                if (i == n)
                    cout << "Element not found!\n";
                break;

            case 4:
                if (n == 0) {
                    cout << "Array is empty!\n";
                    break;
                }

                max = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max)
                        max = arr[i];
                }
                cout << "Maximum Element = " << max << endl;
                break;

            case 5:
                if (n == 0) {
                    cout << "Array is empty!\n";
                    break;
                }

                min = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] < min)
                        min = arr[i];
                }
                cout << "Minimum Element = " << min << endl;
                break;

            case 6:
                if (n == 0) {
                    cout << "Array is empty!\n";
                    break;
                }

                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                cout << "Sum of Elements = " << sum << endl;
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