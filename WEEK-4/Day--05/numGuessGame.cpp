#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));              
    int secretNumber = rand() % 100 + 1; 
    int guess, attempts = 0;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too High! Try again." << endl;
        } 
        else if (guess < secretNumber) {
            cout << "Too Low! Try again." << endl;
        } 
        else {
            cout << "Congratulations! You guessed the correct number." << endl;
            cout << "Total attempts: " << attempts << endl;
        }

    } while (guess != secretNumber);

    return 0;
}