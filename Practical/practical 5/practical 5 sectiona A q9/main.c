#include <stdio.h>
#include <stdlib.h>

int main(){
    printf(" A to Z (capital letters...)\n");
    for(char i='A';i<='Z';i++){
        printf("%c-%d ",i,(int)i);
    }

}
