#include <iostream>
using namespace std;

int main() {
    int terms;
    long long t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> terms;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= terms; ++i) {
        cout << t1;
        if(i < terms) {
            cout << ", ";
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    cout << endl;
    return 0;
}