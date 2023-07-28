#include<stdio.h>
int main(){
    double distance;
    double time;
    double avg;
    printf("Enter the distance: ");
    scanf("%lf", &distance);
    printf("Time: ");
    scanf("%lf", &time);
    avg = distance / time;
    printf("Average speed = %lf", avg);
}
