#include <stdio.h>
#include <string.h>

int main(void){
    char words[][2][10]={
        {"chair", "의자"        },
        {"computer", "컴퓨터"},
        {"integer", "정수"}
    };

    char answer[20];

    int i;

    const int WORD_CNT = sizeof(words)/sizeof(words[0]);

    for(i=0;i<WORD_CNT;i++){
        printf("Q%d. %s의 뜻은?", i+1, words[i][0]);
        scanf("%s", answer);

        if(strcmp(words[i][1],answer)==0){
            printf("정답입니다.\n\n");
        }else{
            printf("틀렸습니다. 정답은 %s입니다.\n\n", words[i][1]);
        }
    }
    printf("\n");

    return 0;
}