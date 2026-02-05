#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void){
    wchar_t wch = L'가'; // 문자 상수 앞에 L 붙여 확장문자임을 알림

    setlocale(LC_ALL, "Korean"); // 지역설정, 한글 출력에 필요

    wprintf(L"%c\n", wch);

    printf("len=%d\n", strlen("가나다123"));
    printf("len=%d\n", wcslen(L"가나다123"));

    return 0;
}