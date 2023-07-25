#include<stdio.h>
    int main(){
    char employeeName[50];
    float basicSalary, newSalary, increment;
    printf("Enter employee name: ");
    scanf("%s", employeeName);
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
         if (basicSalary < 5000) {
         increment = basicSalary * 0.05;
         } else if (basicSalary >= 5000 && basicSalary < 10000) {
         increment = basicSalary * 0.1;
         } else {
         increment = basicSalary * 0.15;
         }
    newSalary = basicSalary + increment;
    printf("\nEmployee Name: %s\n", employeeName);
    printf("New Salary: %.2f\n", newSalary);
}
