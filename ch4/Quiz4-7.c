#include <stdio.h>

int main(void){
    for(int i=1; i<=9;i++){
        printf("%d", i);
        if(i%3==0){
            printf("\n");
        }
    }

    return 0;
}