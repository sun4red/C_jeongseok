#include <stdio.h>

int main(void){
    int num;
    int sum = 0;

    printf("숫자를 입력하세요.(예:12345)>");
    scanf("%d", &num);

    while(num){
        sum += num%10;
        printf("sum=%d num=%d\n", sum, num);

        num /=10;
    }

    printf("각 자리수의 합: %d\n", sum);
    return 0;
}