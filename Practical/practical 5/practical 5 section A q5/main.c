#include <stdio.h>
#include <stdlib.h>

int main(){
    int value,lastIndex;
    printf("Enter a number: ");
    scanf("%d",&value);

    if(value==0){
        printf("revere is 0...\n");
    }else{
        printf("reverse is -> ");
        do{
            lastIndex=value%10;
            printf("%d ",lastIndex);
            value=value/10;
        }while(value!=0);
    }

}
