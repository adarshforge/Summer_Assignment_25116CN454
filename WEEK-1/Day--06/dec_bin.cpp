#include<iostream>
using namespace std;
int main() {
    int n, binary[32], i = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    cout << "Binary representation: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }

    return 0;
}