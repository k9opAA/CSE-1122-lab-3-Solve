Write a program to determine whether the given string is a palindrome or not.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a string is a palindrome
bool isPalindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Characters don't match
        }
        left++;
        right--;
    }
    return true; // All characters matched
}

int main() {
    char inputString[100]; // Adjust the size as needed

    printf("Enter a string: ");
    scanf("%[^\n]", inputString);

    if (isPalindrome(inputString)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
