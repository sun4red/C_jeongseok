#include <stdio.h>

int x;

void func1(void)
{
    int y;
    x = 1;
    y = 2;
    // z = 3;
    // x2 = 4;

    printf("func1() x=%d\n", x);
    printf("func1() y=%d\n", y);
    // printf("func1() z=%d\n", z);
}

int x2;

void func2(void)
{
    int z;
    x = 10;
    // y = 20;
    z = 30;
    x2 = 40;

    printf("func2() x=%d\n", x);
    // printf("func2() y=%d\n", y);
    printf("func2() z=%d\n", z);
    printf("func2() x2=%d\n", x2);
}

int main(void){
    func1();
    func2();
    return 0;
}