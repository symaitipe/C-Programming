#include <stdio.h>
#include <stdlib.h>

int main(){
    int marks=0,total=0;
    float avg=0;
    int count=1;
    int min=2000,max=-1;

    while(count<11){
        printf("Enter %d Marks : ",count);
        scanf("%d",&marks);

        if(marks>max){
            max=marks;
        }
        if(marks<min){
            min=marks;
        }

        total = total+marks;
        count++;
    }
    avg= total/10;

    printf("Maximum marks : %d\n",max);
    printf("Minimum marks : %d\n",min);
    printf("Average is : %.2f\n",avg);

}
