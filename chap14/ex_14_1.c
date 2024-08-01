#include <stdio.h>

int main(void)
{
    int score[3][4] = {{72, 80, 95, 60},{68, 98, 83, 90},{75, 72, 84, 90}};
    int total, size_row = 0, size_column = 0;
    double avg;

    int i, j;

    size_row = sizeof(score)/sizeof(score[0]);
    size_column = sizeof(score[0])/sizeof(score[0][0]);

    /*
    for (i = 0; i < 3; i++)
    {
        printf("4과목의 점수 입력: ");
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &score[i][j]);
        }
        
    }
    */

    for (i = 0; i < size_row; i++)
    {
        total = 0;
        
        for (j = 0; j < size_column; j++)
        {
            total += score[i][j];
        }
        avg = total / (double)size_column;
        printf("총점 : %d, 평균 : %.2lf\n", total, avg);
    }
    
    // 국어 총점, 평균을 구하시오.
    int kor_total = 0;
    double kor_avg = 0.0;

    for (i = 0; i < size_row; i++)
    {
        for (j = 0; j < 1; j++)
        {
            kor_total += score[i][j];
        }
        
    }
    kor_avg = kor_total / (double)size_row;
    printf("국어 점수의 총점 : %d, 평균 : %.2lf 입니다.\n", kor_total, kor_avg);

    return 0;
}