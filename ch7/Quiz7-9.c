#include <stdio.h>

int main(void)
{
    char chArr[10];
    char *ps = "ABC";
    int i = 0;

    // char배열 chArr의 내용을 포인터 ps 가 가르키는 문자열 상수 "ABC"로 변경, 반복문 사용

    // for(i=0;i<sizeof(ps)/sizeof(ps[0]);i++){
    //     chArr[i] = ps[i];
    // }

    while (ps[i] != '\0')
    {
        chArr[i] = ps[i];
        i++;
    }
    chArr[i] = '\0'; // 마지막에 널 문자를 꼭 넣어주세요.

    printf("chArr=%s\n", chArr);
    return 0;
}