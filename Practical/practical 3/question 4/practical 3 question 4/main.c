#include<stdio.h>
    int main(){
    float radius;
    float pi=3.14159;
    printf("Enter the radius : ");
    scanf("%f",&radius);
    printf("Diameter is \t : %.2f",radius*2);
    printf("\nCircumference is : %.2f",2*pi*radius);
    printf("\nArea is \t : %.2f\n",pi*radius*radius);
}
