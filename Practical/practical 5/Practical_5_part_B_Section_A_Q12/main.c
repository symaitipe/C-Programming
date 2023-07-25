#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    printf("Enter a Number : ");
    scanf("%d",&number);

    for(int i=1;i<=number;i++){
        if(number%i==0){
            printf("%d\n",i);
        }
    }
}
