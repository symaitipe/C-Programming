#include <stdio.h>
#include <stdlib.h>

int main(){
    int myMonth;
    printf("Enter The Number Of Month : ");
    scanf("%d",&myMonth);

    switch(myMonth){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("This Month Has 31 Days...\n");
        break;
    case 2:
        printf("This Month Has 28 Days...\n");
        break;
    default:
        printf("This Month Has 30 Days...\n");
        break;
    }
}
