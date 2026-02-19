// 예제 4-10을 변경해서 10점단위가 아닌 5점단위로 학점을 부여.

#include <stdio.h>

int main(void){
    int score;
    char grade = ' ';

    printf("당신의 점수를 입력하세요.(1~100)>");
    scanf("%d", &score);

    switch (score/5)
    {
    case 20 :
    case 19:
        grade = 'A';
        break;
    case 18:
        grade = 'B';
        break;
    case 17:
        grade = 'C';
        break;
    case 16:
        grade = 'D';
        break;
    default:
        grade = 'F';
    }
    
    printf("당신의 학점은 %c입니다.\n", grade);

    return 0;
}