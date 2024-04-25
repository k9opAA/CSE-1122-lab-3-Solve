Write a program to draw the following figure:
* * * * * - - - - -
* * * * * - - - - -
* * * * * - - - - -
- - - - - - - - - -
- - - - - - - - - -
- - - - - - - - - -

#include <stdio.h>
int main() {
    int r = 6;
    int c = 10;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (i < 3 && j < 5) {
                printf("* ");
            } else {
                printf("- ");
            }
        }
        printf("\n");
    }

    return 0;
}

