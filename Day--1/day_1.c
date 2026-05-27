//                1>           PROGRAM TO CALCULATE THE SUM OF FIRST N NATURAL NUMBERS

#include<stdio.h>
int main() {
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum of first %d natural numbers = %d", n, sum);
    return 0;
}


//                2>           PROGRAM TO CALCULATE THE MULTIPLICATION TABLE OF A NUMBER
#include<stdio.h>

int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication Table of %d:\n", num);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

//                3>           PROGRAM TO FIND THE FACTORIAL OF A NUMBER
#include<stdio.h>
int main() {
    int n, i;
    long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Factorial of a negative number does not exist.");
    }
    else {
        for(i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %lld", n, factorial);
    }
    return 0;
}


//               4>           PROGRAM TO COUNTS THE  DIGITS IN A NUMBER



#include<stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 0) {
        count = 1;
    }
    while(num != 0) {
        num = num / 10;
        count++;
    }
    printf("Total digits = %d", count);

    return 0;
}