#include <stdio.h>

int main(void){
    // int arr[2][3][4];
    // int(*ptr)[3][4]  = arr;

    int (*ptr)[3][4]= (int(*)[3][4]) 0x100;
    int i, j, k;

    // for(i=0;i<2;i++){
    //     printf("ptr+%d=%p, &ptr[%d]=%p\n", i, ptr+i, i, &ptr[i]);

    //     for(j=0;j<3;j++){
    //         printf("\t ptr[%d]+%d=%p, &ptr[%d][%d]=%p\n",
    //             i, j, ptr[i]+j, i, j, &ptr[i][j]);

    //         for(k=0;k<3;k++){
    //             printf("\t\t ptr[%d][%d]+%d=%p, &ptr[%d][%d][%d]=%p\n",
    //                 i, j, k, ptr[i][j] + k, i, j, k, &ptr[i][j][k]);
    //         }
    //     }
    // }

    printf("*(ptr[0]+1)+2=%p\n",*(ptr[0]+1)+2);
    printf("sizeof(ptr[1])=%d\n", sizeof(ptr[1]));
    printf("sizeof(ptr+1)=%d\n", sizeof(ptr+1));
    printf("&ptr[1]=%p\n", &ptr[1]);
     
     

    return 0;
}