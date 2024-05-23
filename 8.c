Write a program to determine the value of the nth Fibonacci number Fn Where Fn =  Fn-1  + Fn - 2 and F1 = F2 = 1 (without recursion).

#include <stdio.h>
int main()
{
    int first = 0, second = 1, fib, n, count=0;
    scanf("%d", &n);
    while(count<n)
    {
        if(count<=1)
            fib = count;
        else {
            fib = first + second;
            first = second;
            second = fib;
        }
        count++;
    }
    printf("%d ",fib);

    return 0;
}
