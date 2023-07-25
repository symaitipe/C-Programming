#include <stdio.h>
#include <stdlib.h>

int main(){
    int count=1;
    int price;
    int total=0;
    int beyondCount=0;

    while(count<11){
        printf("Input price of product %d : ",count);
        scanf("%d",&price);
        total=total+price;
        if(price>=200){
            beyondCount++;
        }
        count++;
    }
    float avg=(float)total/10;
    printf("\nAverage of product's price is  : %.2lf \n",avg);
    printf("Number of items which the price is greater than 200 : %d \n",beyondCount);
}
