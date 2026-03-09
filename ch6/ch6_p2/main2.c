#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"

int main(void)
{
    int dan = getUserInput();

    if (2 <= dan && dan <= 9)
        printGugudan(dan);
    else
        printGugudanAll();

    return 0;
}