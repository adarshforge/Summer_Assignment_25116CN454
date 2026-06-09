#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int original = n;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    return original == sum;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong Number";
    else
        cout << num << " is Not an Armstrong Number";

    return 0;
}