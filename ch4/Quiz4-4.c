#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int user, com;

    printf("가위(1), 바위(2), 보(3) 중 하나를 입력하세요.>");
    scanf("%d", &user);

    srand((unsigned)time(NULL));
    com = rand() % 3 + 1;

    // 1. 당신의 선택 출력
    printf("당신은 ");
    switch (user) {
        case 1: printf("가위"); break;
        case 2: printf("바위"); break;
        case 3: printf("보");   break;
    }
    printf("입니다.\n");

    // 2. 컴의 선택 출력
    printf("컴은   ");
    switch (com) {
        case 1: printf("가위"); break;
        case 2: printf("바위"); break;
        case 3: printf("보");   break;
    }
    printf("입니다.\n");

    // 3. 기존 결과 판정 로직
    switch (user - com) {
        case 2: case -1:
            printf("당신이 졌습니다.\n");
            break;
        case 1: case -2:
            printf("당신이 이겼습니다.\n");
            break;
        case 0:
            printf("비겼습니다.\n");
            break;
    }

    return 0;
}