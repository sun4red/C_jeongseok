// 배열 iArr을 내림차순으로 정렬한 후 배열의 모든 요소 출력
#include <stdio.h>

int main(void){
    int iArr[] = {3, 7, 2, 4, 1, 5, 6};

    const int LEN = sizeof(iArr)/sizeof(iArr[0]);

    int i, j, tmp;

    for(i=0;i<LEN-1;i++){
        for(j=i+1;j<LEN;j++){
            if(iArr[i]<iArr[j]){
                tmp = iArr[i];
                iArr[i] = iArr[j];
                iArr[j] = tmp;
            }
        }
    }

    for(i=0;i<LEN;i++){
        printf("%d ", iArr[i]);
    }
    printf("\n");

    return 0;

}