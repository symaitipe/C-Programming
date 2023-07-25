#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    printf("Enter a Number : ");
    scanf("%d",&number);

    switch(number%2){
    case 0:
        printf("This is an Even Number...");
        break;
    case 1:
        printf("This is an odd Number...");
        break;
    }
}
