#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    printf("Enter a Number : ");
    scanf("%d",&number);
    if(number%2==0){
        printf("This Is An Even....\n");
    }else{
        printf("This Is An ODD....\n");
    }
}
