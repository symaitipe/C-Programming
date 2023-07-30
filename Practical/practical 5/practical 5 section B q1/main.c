#include <stdio.h>
#include <stdlib.h>

int main(){
    int count=1,value=0,countZero=0,countPositive=0,countNegative=0;
    while(count<=10){
        printf("Enter %d value : ",count);
        scanf("%d",&value);

        if(value==0){
            countZero++;
        }else if(value>0){
            countPositive++;
        }else{
            countNegative++;
        }
        count++;
    }
    printf("Count of Positives : %d\n",countPositive);
    printf("Count of Negatives : %d\n",countNegative);
    printf("Count of Zeros : %d\n",countZero);
}

