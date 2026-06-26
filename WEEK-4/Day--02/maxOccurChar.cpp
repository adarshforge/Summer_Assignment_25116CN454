#include <iostream>
using namespace std;

int main() {
    char str[100];
    int count[256] = {0};

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    int max = 0;
    char maxChar;

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(int)str[i]] > max) {
            max = count[(int)str[i]];
            maxChar = str[i];
        }
    }
 
    
    cout << "Maximum occurring character = " << maxChar << endl;
    cout << "Frequency = " << max;

    return 0;
}