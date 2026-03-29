#include <stdio.h>

int main (void){

    int* p;
    *p = 4;

    printf("%p\n", p);
    printf("%d\n", *p);
    
}