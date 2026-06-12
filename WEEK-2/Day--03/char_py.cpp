#include <iostream>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) {
            std::cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= i; ++j) {
            std::cout << ch;
            ch++; 
        }
        ch -= 2; 
        for (int j = i - 1; j >= 1; --j) {
            std::cout << ch;
            ch--;
        }
        std::cout << std::endl;
    }

    return 0;
}