#include <stdio.h>

int main(void){
    char* strArr[] = {"abc", "123", "ABC", "111", NULL};
    char* *p = strArr;
    int i;

    while(*p) {
        printf("*p=%s, %p\n", *p, *p);
        p++;
    }
    p = strArr;

    while(*p){
        while(**p){
            printf("%c", **p);
            (*p)++;
        }
        p++;
    }
    puts("");

    for(i=0;strArr[i];i++)
        printf("strArr[%d]=%s, %p\n", i, strArr[i], strArr[i]);

    return 0;
}