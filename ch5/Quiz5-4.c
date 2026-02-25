// 1부터 9사이의 정수 중에 중복되지 않은 3개의 숫자 출력
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));

    int arr[10];
    int i,tmp,n;
    
    const int LEN = sizeof(arr)/sizeof(arr[0]);

    for(i = 1; i<=LEN; i++){
        arr[i-1]=i;
    }

    for(i = 0; i<LEN; i++){
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    printf("==========\n");

    for(i=0;i<LEN;i++){
        n = rand()%LEN;
        tmp = arr[n];
        arr[n]=arr[0];
        arr[0]=tmp;
    }

        for(i = 0; i<LEN; i++){
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    printf("==========\n");

    return 0;

}