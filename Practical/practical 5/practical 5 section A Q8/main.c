#include <stdio.h>
#include <stdlib.h>

int main(){
    int myNum;
    int digCount,total=0;
    int lastIndex;

    printf("Enter a number : ");
    scanf("%d",&myNum);

    int temp=myNum;
    while(temp!=0){
        temp=temp/10;
        digCount++;
    }
    //-----loops for calculate the sum -----//
    int thisCount=1;
    int tempMyNum=myNum;
    while(thisCount<=digCount){
        lastIndex=tempMyNum%10;

        int doWhileController=1;
        int fact=1;

        do{
            fact=fact*lastIndex;
            doWhileController++;
        }while(doWhileController<=digCount);

        total=total+fact;
        tempMyNum=tempMyNum/10;
        thisCount++;
    }

    printf("total = %d\n",total);
    if(total==myNum){
        printf("This is an Armstrong number...");
    }else{
        printf("This is not an Armstrong number...");
    }

}
