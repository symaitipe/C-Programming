#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 10;
    int array[size];
    int evenCount=0;

    printf("Enter %d integers....\n", size);

    for (int i = 0; i < size; i++) {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++) {
        if(array[i]%2==0){
            evenCount++;
        }
    }

    printf("\nCount of Even Numbers You've Entered is : %d\n",evenCount);
    printf("\nCount of odd Numbers You've Entered is : %d\n",10-evenCount);

}

