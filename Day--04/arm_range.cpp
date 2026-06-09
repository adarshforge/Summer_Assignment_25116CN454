#include <iostream>
using namespace std;

int main() {
    int start, end, temp, remainder, sum;

    cout << "Enter lower limit: ";
    cin >> start;
    cout << "Enter upper limit: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are: " << endl;
    for (int i = start; i <= end; i++) {
        temp = i;
        sum = 0;
 
        while (temp != 0) {
            remainder = temp % 10;
            sum += remainder * remainder * remainder;
            temp /= 10;
        }

        //              If the sum of cubes equals the original number, print it
        if (sum == i) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}