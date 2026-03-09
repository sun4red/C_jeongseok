#include <stdio.h>

int x = 100;

int main(void){
    printf("x=%d\n", x);

    int x = 200;

    printf("x=%d\n", x);

    return 0;
}