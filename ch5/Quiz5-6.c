// 사용자에게 문자열을 입력받아서 문자열의 길이를 알려주는 프로그램
#include <stdio.h>
#define LEN 10
int main(void){
    
    char str[LEN];
    printf("단어를 하나만 입력하세요.>");
    
    scanf("%s", str);

    printf("입력한 단어: %s\n", str);

    int i, strLen=0;
    for(i=0; i<LEN; i++){
        if(str[i]!='\0'){
            strLen++;
        }else{
            break;
        }
    }

    printf("입력한 단어의 문자개수: %d\n", strLen);

    return 0;
}