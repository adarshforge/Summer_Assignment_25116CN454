#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[10][10], Transpose[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }



    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Transpose[j][i] = A[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << Transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}