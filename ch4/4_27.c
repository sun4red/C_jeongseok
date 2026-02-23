#include <stdio.h>

int main(void){
    int num;
    int sum = 0;
    int flag = 1; // while문의 조건식에 사용될 변수.

    printf("합계를 구할 숫자를 입력하세요. (끝내려면 0을 입력.)\n");

    while(flag){
        printf(">>");
        scanf("%d", &num);

        if(num!=0){
            sum+=num;
        }else{
            flag=0;
        }
    }
    printf("합계:%d\n", sum);

    return 0;
}