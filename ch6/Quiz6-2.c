#include <stdio.h>

int max(int x, int y){
    return x > y ? x : y;
}
int max3(int x, int y, int z){
 // 3개 중에 가장 큰 수 완성

 return max(max(x, y), z);
 
    // int result;

    // if(x >= y && x >= z){
    //     result = x;
    // }else if(y >= x && y >= z){
    //     result = y;
    // }else{
    //     result = z;
    // }

    // return result;
}

int main(void){

    int x = 75;
    int y = 35;
    int z = 3;

    int max = max3(x, y, z);

    printf("max3 = %d", max);
}