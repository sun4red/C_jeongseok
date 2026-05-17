#include <stdio.h>

int main(void) {
    // [문제 1] 
    // char* 타입이 [5][3] 구조로 있는 배열
    char* name[5][3] = {
        {"Apple", "Banana", "Cherry"},
        {"Dog", "Cat", "Bird"},
        {"Red", "Green", "Blue"},
        {"Star", "Moon", "Sun"},
        {"Car", "Bus", "Bike"}
    };

    // ①번 정답: 한 줄에 char* 3개가 있으므로 [3]을 명시
    char* (*ptr)[3] = name; 


    // [문제 2] 
    // char 타입이 [3][4][6] 구조로 있는 3차원 배열
    char name2[3][4][6] = {0, }; // (내용은 0으로 초기화)

    // ②번 정답: 한 층이 [4][6] 구조이므로 이를 명시
    char (*ptr2)[4][6] = name2;


    // --- 확인 출력 ---
    printf("1번 포인터 ptr이 가리키는 첫 문자열: %s\n", ptr[0][0]);
    printf("1번 포인터 ptr의 점프 단위(sizeof(*ptr)): %d 바이트\n", (int)sizeof(*ptr));
    printf("2번 포인터 ptr2의 점프 단위(sizeof(*ptr2)): %d 바이트\n", (int)sizeof(*ptr2));

    return 0;
}