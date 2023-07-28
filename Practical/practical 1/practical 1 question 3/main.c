#include <stdio.h>
int main() {
     int integerValue;
     float floatValue;
     double doubleValue;
     char charValue;
     printf("Enter an integer value: ");
     scanf("%d", &integerValue);
     printf("Enter a float value: ");
     scanf("%f", &floatValue);

     printf("Enter a double value: ");
     scanf("%lf", &doubleValue);
     printf("Enter a character: ");
     scanf(" %c", &charValue);
     printf("\n---Here Values You entered---\n");
     printf("Integer: %d\n", integerValue);
     printf("Float: %.2f\n", floatValue);
     printf("Double: %.2lf\n", doubleValue);
     printf("Character: %c\n", charValue);
}
