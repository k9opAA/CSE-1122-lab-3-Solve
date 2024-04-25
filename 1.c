Write a program to display
1
22
333
….

#include <stdio.h>
int main() {
    int r;
    scanf("%d", &r);

    for (int i = 1; i <= r; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

