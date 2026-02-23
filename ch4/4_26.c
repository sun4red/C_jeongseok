#include <stdio.h>

int main(void){
    int sum = 0, i = 0;

    while((sum+= ++i)<=100)
        printf("%d - %d\n", i, sum);

        return 0;
}