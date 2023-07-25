#include <stdio.h>
#include <stdlib.h>

int main(){
    char myChar;
    printf("Enter a English letter : ");
    scanf(" %c",&myChar);

    switch(myChar){
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("This is a vowel...\n");
        break;
    default:
        printf("This is Not a vowel...\n");
        break;
    }
}
