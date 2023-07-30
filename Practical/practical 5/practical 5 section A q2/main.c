#include <stdio.h>
#include <stdlib.h>

int main(){
    float total=0;
    float marks;
    float avg;
    for(int i=1;i<11;i++){
        printf("Enter the %d Mark : ",i);
        scanf("%f",&marks);
        total=total+marks;
    }
    avg = total/10;
    printf("\nTotal is %.2f",total);
    printf("\nAverage is %.2f",avg);

    if(avg<50){
        printf("\nFail...\n");
    }else{
        printf("\nPass...\n");
    }
}
