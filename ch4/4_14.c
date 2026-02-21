#include <stdio.h>

int main(void){
    int sum = 0;
    int i;

    for(i=1;i<=10;i++){
        sum += i;
        printf("1부터 %2d 까지의 합: %2d\n", i, sum);
    }
    return 0;
}