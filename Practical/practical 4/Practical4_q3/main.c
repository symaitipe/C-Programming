#include <stdio.h>
#include <stdlib.h>
//------terminate the program method----//
void terminateProgram() {
    clearScreen();
    printf("Program terminated.\n");
    exit(0);
}

//-----clear Screen Method-----//
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
//-----Main Method-----//
int main(){
    char rotate='Y';
    float circumference,area,volume,radius;
    int choice;
    float pi=3.14;

    while(rotate='Y'){
        printf("+-----------------------+\n");
        printf("|\tCalculater\t|\n");
        printf("+-----------------------+\n");

        printf("[1] Circumference\n");
        printf("[2] Area\n");
        printf("[3] Volume\n");
        printf("What do you want to calculate --> ");
        scanf("%d",&choice);
        printf("\nEnter the Radius : ");
        scanf("%f",&radius);

        circumference = 2*pi*radius;
        area = pi*radius*radius;
        volume = (3.0/4)*pi*radius*radius*radius;

        switch(choice){
        case 1:
            printf("Circumference is : %.2lf \n",circumference);
            break;
        case 2:
            printf("Area is : %.2lf \n",area);
            break;
        case 3:
            printf("Volume is : %.2lf \n",volume);
            break;
        }
        printf("Do you want to calculate again? (Y/N) : ");
        scanf(" %c",&rotate);
        if(rotate=='Y'){
            clearScreen();
        }else{
            terminateProgram();
        }
    }

}
