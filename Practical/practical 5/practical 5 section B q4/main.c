#include <stdio.h>
#include <stdlib.h>

//------------Main Method--------------//
int main(){
    int empId,count=0;
    float basSal;
    char repeat = 'Y';

    while(repeat='Y'){
        printf("\nEnter the Employee ID Number : ");
        scanf("%d",&empId);
        if(empId==(-999)){
            repeat='N';
            break;
        }
        printf("Enter The basic salary of %d employee :",empId);
        scanf("%d",&basSal);
        if(basSal>=5000){
        count++;
        }
    }
    printf("\nCount of the Employees whose Basic Salary >=5000 : %d\n",count);
}
