// 다음 함수를 재귀 호출 대신 반복문을 사용하도록 변경

long long power(int x, int n){
    if(n==1)
        return x;
    return x * power(x, n-1);
}

// ==============================

#include <stdio.h>

long long powerRevised(int x, int n){
    long long result = 1;
    if(n==0)
        return result;
    if(n==1)
        return result*x;
    while(n){
        result *= x;
        n--;
    }
    return result;
}

int main(void){
    int x = 2;
    int n = 5;

    printf("power(%d, %d)=%lld\n", x, n, power(x,n));
    puts("==============================");
    printf("powerRevised(%d, %d)=%lld\n", x, n, powerRevised(x,n));

    return 0;
}