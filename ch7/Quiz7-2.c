#include <stdio.h>

int main(void){

    // 다음의 문장들이 수행되고 난 후의 출력 결과를 예측, 
    // 변수 i의 주소는 0x100이라고 가정

    int i = 100;
    int* ptr = &i;
    int i2 = *ptr;

    *ptr = 200;

    printf("i       =%d\n", i);
    printf("i2      =%d\n", i2);
    printf("*ptr    =%d\n", *ptr);
    printf("&i      =%p\n", &i);
    printf("ptr     =%p\n", ptr);

    return 0;
}

//  i = 200
//  i2 = 100
// *ptr = 200
// &i = 0x100
// ptr = 0x100