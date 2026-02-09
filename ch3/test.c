#include <stdio.h>

int main() {
    char c = 10;
    unsigned int u = 20;
    int i = -50;

    // 1. char + unsigned int
    // char가 int로 승격된 후, 다시 unsigned int로 변환됩니다.
    printf("1. char(10) + unsigned(20) = %u\n", c + u);
    printf("   결과의 크기: %zu bytes (unsigned int)\n\n", sizeof(c + u));

    // 2. unsigned int + int (주의!)
    // i(-50)가 unsigned int로 변환되면서 매우 큰 양수로 바뀝니다.
    unsigned int result = u + i; 
    printf("2. unsigned(20) + int(-50) = %u\n", result);
    printf("   결과의 크기: %zu bytes (unsigned int)\n", sizeof(u + i));

    // 왜 이런 큰 숫자가 나올까? (i의 비트 패턴 확인)
    printf("   int(-50)을 unsigned로 해석하면: %u\n", (unsigned int)i);

    return 0;
}