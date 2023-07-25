#include<stdio.h>
    int main(){
    int inputOne=0,inputTwo=0;
    char reply = 'Y';
         while(reply=='Y'){
         printf("\n");
         printf("Enter First Number : ");
         scanf("%d",&inputOne);
         printf("Enter Sec Number : ");
         scanf("%d",&inputTwo);
         if(inputOne!=0 && inputTwo !=0 ){
         if(inputOne%inputTwo==0){
         printf("\n%d is a multiple of %d\n",inputOne,inputTwo);
         }else{
         printf("\n%d is not a multiple of %d\n",inputOne,inputTwo);
         }
         reply='N';
         }else{
         printf("\nCan't 0 be a value,Do you want to Try again with different values...(Y/N) : ");
         scanf(" %c",&reply);
         }
     }
}
