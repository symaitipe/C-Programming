#include<stdio.h>
int main(){
int numberOne,numberTwo,numberThree;

printf("Enter First Input : ");
scanf("%d",&numberOne);
printf("Enter Second Input : ");
scanf("%d",&numberTwo);
printf("Enter Third Input : ");
scanf("%d",&numberThree);
//-----comparing three inputs----//
 if(numberOne>numberTwo && numberOne>numberThree){
 printf("%d is the Highest Number",numberOne);
 }else if(numberTwo>numberOne && numberTwo>numberThree){
 printf("%d is the Highest Number",numberTwo);
 }else{
 printf("%d is the Highest Number",numberThree);
 }
}
