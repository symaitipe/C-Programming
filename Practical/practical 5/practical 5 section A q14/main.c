#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 10;
    int array[size];

    printf("Enter %d integers....\n", size);

    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("The array elements are:\n");

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

}
