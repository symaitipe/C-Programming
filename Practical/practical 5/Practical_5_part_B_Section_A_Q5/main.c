//------sec_B_q5--------//

#include <stdio.h>
#include <stdlib.h>

int main(){
    char recycle='Y';
    int empCount=0,empNumber,wkHours,otPayment,basic,exceedCount=0;

    while(recycle='Y'){

        printf("\n----------------------------\n");
        printf("\nEnter Employee Number : ");
        scanf("%d",&empNumber);
        if(empNumber==(-999)){
            break;
        }
        printf("Hours you worked for week : ");
        scanf("%d",&wkHours);
        if(wkHours>40){
            otPayment = (wkHours-40)*200;
            basic = 40*150;
            if(otPayment>=4000){
            exceedCount++;
            }
            printf("\nEmployee Number : %d\n",empNumber);
            printf("Basic Time Payment : %d\n",basic);
            printf("Over Time Payment : %d\n",otPayment);
        }else{
            basic = wkHours*150;
            printf("\nEmployee Number : %d\n",empNumber);
            printf("Basic Time Payment : %d\n",basic);
            printf("Over Time payment : 0\n");
        }
        empCount++;
    }
    float percentage = (float)exceedCount/empCount*100;
    printf("the percentage of employees whose Over Time Payment exceeding the Rs 4000/- : %.2lf %%\n",percentage);
}

