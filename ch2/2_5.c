#include <stdio.h>

int main(void)
{
    short s = 0x1234567890; // 10진수로 약 780억
    int i = 0x1234567890;   // int 최대값은 20억

    printf("%#11x-%11d\n\n", 0x1234567890, 0x1234567890);

    // 16진수로 출력
    printf("[16진수]\n");
    printf("s=%#x\n", s);
    printf("i=%#x\n", i);
    printf("\n");

    // 10진수로 출력
    printf("[10진수]\n");
    printf("s=%d\n", s);
    printf("i=%d\n", i);
    printf("\n");

    return 0;
}