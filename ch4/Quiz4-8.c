// 1부터 10까지의 곱을 계산하여 출력

#include <stdio.h>

int main(void){
    int sum = 1;
    int i;

    for(i=1;i<=10;i++){
        sum *= i;
        printf("1부터 %2d 까지의 곱: %2d\n", i, sum);
    }
    return 0;
}