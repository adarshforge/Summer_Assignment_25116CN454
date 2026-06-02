#include <iostream>
using namespace std;

int main() {
    int n, largest = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    cout << "Largest Prime Factor = " << largest;

    return 0;
}