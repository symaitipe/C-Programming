#include <stdio.h>
#include <stdlib.h>

int main(){
   int myInput=0;
   int count=1;
   int total=0;

   while(myInput!=-1){
        printf("Enter number %d : ",count);
        scanf("%d",&myInput);
        total=total+myInput;
        count++;
   }
   total=total+1;
   printf("\n Sum of Your Inputs is : %d ",total);
}
