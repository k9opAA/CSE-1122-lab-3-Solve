Write a program to determine the value of the nth Fibonacci number Fn Where Fn =  Fn-1  + Fn - 2 and F1 = F2 = 1 (without recursion).

#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Ensure the number is positive
    if (n <= 0) {
        printf("Fibonacci number is not defined for non-positive integers.\n");
    } else {
        int fib = fibonacci(n);
        printf("The %dth Fibonacci number is %d\n", n, fib);
    }

    return 0;
}
