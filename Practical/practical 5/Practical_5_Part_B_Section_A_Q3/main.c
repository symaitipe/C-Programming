#include <stdio.h>
#include <stdlib.h>

int main(){
    int myNum;
    int total=1;
    printf("Enter the number : ");
    scanf("%d",&myNum);

    if(myNum==0){
        printf("Factorial of %d is 1\n",myNum);
    }else{
        int temp=myNum;
        while(temp!=0){
            total=total*temp;
            temp--;
        }
        printf("Factorial of %d is %d\n",myNum,total);
    }
}
