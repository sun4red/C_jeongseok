// 길이가 10인 int배열 arr을 선언하고, 
// 1과 100사이의 임의의 정수로 초기화한 후에 
// 배열의 모든 요소를 출력하는 코드를 작성

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int arr[10];
    
    srand(time(NULL));

    int i;
    for(i=0;i<10;i++){
    int num = rand() % 100 + 1;
    arr[i] = num;
    }

    for(i=0;i<10;i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}