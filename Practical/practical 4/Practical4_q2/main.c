#include <stdio.h>
#include <stdlib.h>

int main(){
    float valOne,valTwo,result;
    char myChar;

    printf("+-----------------------+\n");
    printf("|\tCalculater\t|\n");
    printf("+-----------------------+\n");

    printf("Enter Value 1 : ");
    scanf("%f",&valOne);
    printf("Enter Value 2 : ");
    scanf("%f",&valTwo);

    printf("\nSelect (+ - / *): ");
    scanf(" %c",&myChar);


    switch(myChar){
    case '+':
        result = valOne+valTwo;
        printf("%.2lf + %.2lf = %.2lf",valOne,valTwo,result);
        break;
    case '-':
        result = valOne-valTwo;
        printf("%.2lf - %.2lf = %.2lf",valOne,valTwo,result);
        break;
    case '/':
        result = valOne/valTwo;
        printf("%.2lf / %.2lf = %.2lf",valOne,valTwo,result);
        break;
    case '*':
        result = valOne*valTwo;
        printf("%.2lf * %.2lf = %.2lf",valOne,valTwo,result);
        break;
    }
}
