#include<stdio.h>
int main(){
    float monthlySales,bonus,additionalAllowance,cityAllowance,basSal;
    int yearOfExperience;
    char workingCity;
    //---------asking basic salary---------//
    printf("Enter your Basic Salary : ");
    scanf("%f",&basSal);
    //---------asking monthly sales---------//
    printf("Enter your monthly sales : ");
    scanf("%f",&monthlySales);
     if(monthlySales>=50000){
     bonus=basSal*0.15;
     }else if(monthlySales>=25000){
     bonus=basSal*0.12;
     }else if(monthlySales>0 && monthlySales<25000){
     bonus=basSal*0.1;
     }else{
     bonus=0;
     }
    //---------asking experience------------//
    printf("Enter your year of experience : ");
    scanf("%d",&yearOfExperience);
     if(yearOfExperience>=5){
     additionalAllowance=basSal*0.1;
     }else{
     additionalAllowance=0;
     }
    //---------asking working city Colombo or not-----------//
    printf("Do you working in colombo (press C if yes): ");
    scanf(" %c",&workingCity);
     if(workingCity=='C'||workingCity=='c'){
     cityAllowance=2500;
     }else{
     cityAllowance=0;
     }
    //---------calculate the final salary---------//
    float finalSalary = bonus+additionalAllowance+cityAllowance+basSal;
    printf("\nYour final salary is %.2f\n",finalSalary);
}
