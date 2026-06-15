#include<iostream>
using namespace std ;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter element to search: ";
    cin >> target;
    int low = 0, high = n - 1;
    bool found = false;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            cout << "Element found at index: " << mid << endl;
            found = true;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (!found) {
        cout << "Element not found" << endl;
    }
    return 0;
}