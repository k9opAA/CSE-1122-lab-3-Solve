Write a program to calculate the factorial of a positive integer quantity (using recursion).

#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Ensure the number is positive
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long fact = factorial(number);
        printf("Factorial of %d is %llu\n", number, fact);
    }

    return 0;
}
