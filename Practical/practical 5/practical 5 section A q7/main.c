#include <stdio.h>

int main() {
    int n = 10;
    int first = 0, second = 1, next;

    printf("Fibonacci Sequence: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }

    printf("\n");

    return 0;
}
