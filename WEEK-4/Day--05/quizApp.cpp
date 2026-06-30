#include <iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "===== Quiz Application =====" << endl;
    cout << "Answer the following questions:\n" << endl;

    // Question 1
    cout << "1. What is the capital of India?" << endl;
    cout << "1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is mainly used for system programming?" << endl;
    cout << "1. C++\n2. HTML\n3. CSS\n4. SQL" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a leap year?" << endl;
    cout << "1. 365\n2. 366\n3. 364\n4. 360" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 4
    cout << "\n4. Which symbol is used to end a C++ statement?" << endl;
    cout << "1. :\n2. ,\n3. ;\n4. ." << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 5
    cout << "\n5. Which planet is known as the Red Planet?" << endl;
    cout << "1. Earth\n2. Mars\n3. Jupiter\n4. Venus" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Display Result
    cout << "\n===== Quiz Result =====" << endl;
    cout << "Your Score: " << score << " out of 5" << endl;

    if (score == 5)
        cout << "Excellent! Perfect Score!" << endl;
    else if (score >= 3)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}