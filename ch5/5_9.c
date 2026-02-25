#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int ball[45];
    const int LEN = sizeof(ball)/sizeof(ball[0]);
    int i, n, tmp;

    srand((unsigned)time(NULL));

    for(i=0;i<LEN;i++)
        ball[i]=i+1;

        for(i=0;i<LEN;i++){
            n = rand() % LEN;

            tmp = ball[i];
            ball[i]=ball[n];
            ball[n]=tmp;
        }
        for(i=0;i<6;i++)
            printf("ball[%d]=%d\n", i, ball[i]);
        
        return 0;
}