#include <stdio.h>

int main(void){
    int i, tmp;

    for(i=1;i<=100;i++){
        printf("i=%d ", i);

        tmp = i;

        do{
            if(tmp % 10 % 3 == 0 && tmp %10!=0)
                printf("짝");
        }while(tmp/=10);

        printf("\n");
    }
    return 0;
}