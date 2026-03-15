// 배열 arr과 이 배열을 가르키는 포인터 ptr이 아래와 같이 선언되어있을 때,
// 포인터 ptr을 이용해서 배열 arr의 모든 요소를 합하고 평균을 출력하는 예제 작성

#include <stdio.h>

int arr[] = {1,2,3,4,5,6};
int *ptr = &arr[0];

int main(void){

    int sum = 0;
    double avg = 0;
    
    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i<len; i++){
        sum+=*ptr++;
    }
    avg=sum/(double)len;

    printf("sum = %d\n", sum);
    printf("avg = %0.6f\n", avg);
}
