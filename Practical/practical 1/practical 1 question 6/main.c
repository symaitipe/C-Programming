#include <stdio.h>
int main() {
     char name[30];
     int birthyear;
     int age;
     printf("Enter Student Name : ");
     scanf("%s",&name);
     printf("Enter Birth Year : ");
     scanf("%d",&birthyear);
     age = 2023-birthyear;
     printf("your name : %s\n",name);
     printf("Age is: %d\n", age);
}
