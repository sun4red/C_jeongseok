#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "abc";

    printf("\"abc\"==\"abc\" ? %d\n", "abc"=="abc");
    printf("str ==\"abc\" ? %d\n", str=="abc");
    printf("strcmp(str, \"abc\") ? %d\n", strcmp(str, "abc"));
    printf("strcmp(str, \"abb\") ? %d\n", strcmp(str, "abb"));
    printf("strcmp(str, \"abd\") ? %d\n", strcmp(str, "abd"));

    return 0;
}