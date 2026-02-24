// #include <stdio.h>
// #include <string.h>

// int main(void){
//     // 다음 세 개의 배열을 합쳐서 하나의 새로운 배열을 만드는 코드를 작성
//     int arr1[] = {1,2,3};
//     int arr2[] = {4,5,6,7};
//     int arr3[] = {8,9,10};

//     int arrSum[1];


//     const int LEN 
//     = sizeof(arr1)/sizeof(arr1[0])
//     + sizeof(arr2)/sizeof(arr2[0])
//     + sizeof(arr3)/sizeof(arr3[0]);

    
//     memcpy(arrSum, arr1, sizeof(arr1[0])*LEN);

//     int i=0;
//     for(i=0;i<LEN;i++){
//         if(i<sizeof(arr1)/sizeof(arr1[0])){
//             arrSum[i] = arr1[i];
//         }else if(i>=sizeof(arr1)/sizeof(arr1[0])
//             && i<sizeof(arr1)/sizeof(arr1[0])+sizeof(arr2)/sizeof(arr2[0])){
//             arrSum[i] = arr2[i-sizeof(arr1)/sizeof(arr1[0])];
//         }else if(i>=sizeof(arr1[0])+sizeof(arr2)/sizeof(arr2[0])){
//             arrSum[i] =
//             arr3[i-sizeof(arr1)/sizeof(arr1[0])-sizeof(arr2)/sizeof(arr2[0])];
//         }
//     }

//     for(i=0;i<LEN;i++){
//         printf("arrSum[%d] = %d\n", i, arrSum[i]);
//     }
// }

#include <stdio.h>
#include <string.h>

int main(void){
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6, 7};
    int arr3[] = {8, 9, 10};

    // 1. 크기를 10(혹은 넉넉하게 100)으로 수정하세요.
    int arrSum[10]; 

    const int LEN = sizeof(arr1)/sizeof(arr1[0])
                  + sizeof(arr2)/sizeof(arr2[0])
                  + sizeof(arr3)/sizeof(arr3[0]);

    // 2. 이 memcpy는 논리적으로 위험하므로 삭제하거나 주석 처리하세요.
    // memcpy(arrSum, arr1, sizeof(arr1[0])*LEN); 

    int i;
    int k = 0; 

    for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        arrSum[k++] = arr1[i];
    }
    for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
        arrSum[k++] = arr2[i];
    }
    for (i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
        arrSum[k++] = arr3[i];
    }

    for(i = 0; i < LEN; i++){
        printf("arrSum[%d] = %d\n", i, arrSum[i]);
    }

    return 0;
}