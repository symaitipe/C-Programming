#include <stdio.h>

int main(){
    int value;
    int total=0;
    int lastIndex;
    int temp;

    printf("Enter a value : ");
    scanf("%d",&value);
    temp = value;
    if(value>0){
        while (temp!=0) {
        lastIndex = temp%10;
        total += lastIndex;
        temp = temp/10;
        }
        printf("output is : %d\n",total);
    }else{
        printf("output is : 0 ");
    }
}
