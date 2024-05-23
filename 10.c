Write a program to reverse a string using recursion.

#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
