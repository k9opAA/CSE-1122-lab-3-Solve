Write a program that will read in a sequence of characters and write out a sequence of encoded characters in its place.
[Hint: If a character is a letter or digit, you have to replace it with the next character in the characters set except that Z will be replaced by A, z by a and 9 by 0. Any character other than a letter or digit will be replaced by a *. ]


#include <stdio.h>

int main() {
    char input[1000];
    int i = 0;
    char ch;

    // Prompt the user for input
    printf("Enter a sequence of characters: ");

    // Read characters one by one until newline or end of file is encountered
    while ((ch = getchar()) != '\n' && ch != EOF) {
        input[i++] = ch;
    }
    input[i] = '\0';  // Null-terminate the string

    // Iterate over each character in the input
    for (int j = 0; j < i; j++) {
        if ((input[j] >= 'A' && input[j] <= 'Y') || (input[j] >= 'a' && input[j] <= 'y') || (input[j] >= '0' && input[j] <= '8')) {
            input[j] += 1;
        } else if (input[j] == 'Z') {
            input[j] = 'A';
        } else if (input[j] == 'z') {
            input[j] = 'a';
        } else if (input[j] == '9') {
            input[j] = '0';
        } else {
            input[j] = '*';
        }
    }

    // Print the encoded sequence
    printf("Encoded sequence: %s\n", input);

    return 0;
}
