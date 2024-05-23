Write a program to calculate the factorial of a positive integer quantity (using recursion).

#include <stdio.h>
int factorial(int n) {
 if (n == 0) {
 return 1;
 } else {
 return n*factorial(n-1);
 }
}
int main() {
 int num,fact;
 scanf("%d",&num);
 if(num<0) {
 } else {
 fact=factorial(num);
 printf("Factorial of %d is = %d\n",num,fact);
 }
 return 0;
}
}
