#include<stdio.h>
int main(){
float cels;
int fah;
printf("Enter the temperature in Fahrenheit: ");
scanf("%d", &fah);
cels = (5.0/9.0)*(fah-32);
printf("temperature in celcius: %.2f",cels);
}
