#include <stdio.h>
int main() {
     int numberOne,numberTwo;
     printf("Enter number1 : ");
     scanf("%d",&numberOne);
     printf("Enter number2 : ");
     scanf("%d",&numberTwo);
     printf("before swap,\nnumberOne = %d\n",numberOne);
     printf("numberTwo = %d\n",numberTwo);
     int temp;
     temp = numberOne;
     numberOne=numberTwo;
     numberTwo=temp;
     printf("after swap,\nnumberOne = %d\n",numberOne);
     printf("numberTwo = %d\n",numberTwo);
}
