#include <stdio.h>

int main(void)
{

    int score[][4][3] = {
        {                 // 1반
         {100, 100, 100}, // 1반 1번
         {90, 90, 90},    // 1반 2번
         {80, 80, 80},
         {70, 70, 70}},
        {{95, 95, 90},
         {85, 85, 80},
         {75, 75, 70},
         {65, 65, 60}}};

    int i, j, k;

    const int BAN = sizeof(score) / sizeof(score[0]);
    const int BUN = sizeof(score[0]) / sizeof(score[0][0]);
    const int SUB = sizeof(score[0][0]) / sizeof(score[0][0][0]);

    for (i = 0; i < BAN; i++)
    {
        printf("[%d반]\n", i + 1);

        for (j = 0; j < BUN; j++)
        {
            printf("%d번 ", j + 1);

                        int sum = 0;

            for (k = 0; k < SUB; k++){
                printf("%3d ", score[i][j][k]);
                sum += score[i][j][k];
            }
            printf("sum=%d", sum);
            puts("");
        }
        puts("");
    }
}