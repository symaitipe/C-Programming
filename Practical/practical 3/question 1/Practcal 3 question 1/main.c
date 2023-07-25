#include<stdio.h>
int main(){
int numberOne,numberTwo;
printf("Enter First Input : ");
scanf("%d",&numberOne);
printf("Enter Second Input : ");
scanf("%d",&numberTwo);
//-----comparing two inputs----//
 if(numberOne>numberTwo){
 printf("%d is the Highest Number",numberOne);
 }else{
 printf("%d is the Highest Number",numberTwo);
 }
}
