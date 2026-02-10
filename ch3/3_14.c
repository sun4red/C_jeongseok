// Quiz 3-3 소수점 셋째자리에서 올림

#include <stdio.h>

int main(void){
    double pi = 3.141592;
    // double shortPi = (빈칸);
    double shortPi = (int)(pi * 100 + 0.9) / 1000.0;

    printf("%lf\n", shortPi);

    return 0;
}