#include <stdio.h>

int main(void){
    int score;
    char grade = ' ';

    printf("점수를 입력하세요>");
    scanf("%d", &score);

    if(score >= 90){
        grade = 'A';
    }else if(score>=90){
        grade = 'B';
    }else if(score >=80){
        grade = 'C';
    }else{
        grade = 'D';
    }

    printf("당신의 학점은 %c입니다.\n", grade);

    return 0;
}