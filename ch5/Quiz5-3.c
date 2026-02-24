#include <stdio.h>

int main(void){
    // 배열 arr , 홀수번째 요소의 합과 짝수번째 요소의 합을 출력
    int arr[] = {10, 20, 30, 40, 50, 60, 70};


    int odd = 0;
    int even = 0;

    int i;

    // sizeof 자료형 비교 경고
    for(i = 0; i < sizeof(arr)/sizeof(arr[0]);i++){
        if(i%2==0){
            odd += arr[i];
        }else{
            even += arr[i];
        }
    }

    printf("홀수의 합: %d\n", odd);
    printf("짝수의 합: %d\n", even);

    return 0;
}