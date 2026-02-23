#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int num1, num2;
    int sum = 0;

    srand(time(NULL));

    // roll_again:

    do{
    num1 = rand() % 6 + 1;
    num2 = rand() % 6 + 1;

    printf("num1 = %d, num2 = %d\n", num1, num2);

    sum += num1 + num2;
    }while(num1==num2);
    // if(num1 == num2)
        // goto roll_again;

    printf("sum = %d\n", sum);

    return 0;
}