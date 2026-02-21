#include <stdio.h>

int main(void){
    for(int i = 1; i<=9 ; i++){
        printf("%d \t %d \n", (i-1)%3+1, (i+2)/3);
    }
    return 0;
}