#include <stdio.h>

void printGugudan(int dan){
    int i;
    for(i=1;i<=9;i++)
        printf("%d*%d=%2d\n", dan, i, dan*i);
}

int main(void){
    int dan;
    printf("input dan\n");
    scanf("%d", &dan);

    if(dan>=2 && dan <=9){
        printGugudan(dan);
        return 0;
    }else{
        return 0;
    }
}