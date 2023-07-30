#include <stdio.h>
//-----clear Screen Method-----//
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

//------terminate the program method----//
void terminateProgram() {
    clearScreen();
    printf("Program terminated.\n");
    exit(0);
}

//---------Main method-----------//
int main() {
    int myNum;
    char myChar;
    int count=0;

    printf("+-------------------------------+\n");
    printf("|\tPrime Number Checker\t|\n");
    printf("|_______________________________|\n");

    printf("Enter a Number: ");
    scanf("%d",&myNum);

    if (myNum <= 0) {
        printf("0 cannot be entered....\n ");
        printf("Do you want to input Again...(Y/N) : ");
        scanf(" %c",&myChar);
        if(myChar=='Y'||myChar=='y'){
            clearScreen();
            main();
        }else{
            terminateProgram();
        }
    }else{
        for(int i=1;i<=myNum;i++){
            if(myNum%i==0){
                count++;
            }
        }
    }
    if(count==2){
        printf("this is a Prime Number....\n");
    }else{
        printf("this is Not a Prime Number....\n");
    }

    printf("\nDo you want to input Again...(Y/N) : ");
    scanf(" %c",&myChar);
    if(myChar=='Y'||myChar=='y'){
        clearScreen();
        main();
    }else{
        terminateProgram();
    }

    return 0;
}
