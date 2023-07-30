#include <stdio.h>
#include <stdlib.h>

int main(){
    int base,expo;
    int power=1,count=0;

    printf("Enter a Base Value: ");
    scanf("%d",&base);
    printf("Enter a Exponent Value: ");
    scanf("%d",&expo);

    if(expo==0){
        printf("\npower of base %d and exponent %d is 1\n",base,expo);
    }else if(base==0){
        printf("Base cannot be 0...\n");
    }else{
        while(count<expo){
            power = base*power;
            count++;
        }
         printf("\npower of base %d and exponent %d is %d\n",base,expo,power);
    }


}
