#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool prime = true;

    cin >> n;

    if (n <= 1) {
        prime = false;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
    }

    if (prime)
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    return 0;
}