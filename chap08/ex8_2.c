#include <stdio.h>
// 배열과 for문을 사용한 성적 처리 프로그램(n과목)
int input(void);

int main(void)
{
    int total = 0, i, n = 0;
    double avg = 0.0;

    n = input();
    int score[n];

    for (i = 0; i < n; i++) //n 과목의 성적을 입력에 score[n]에 저장
    {
        printf("%d과목의 성적을 입력해주세요: ", n-i);
        scanf("%d", &score[i]);
    }
    
    for (i = 0; i < n; i++) // n 과목의 성적을 모두 더해 total에 저장
    {
        total += score[i];
    }

    printf("입력하신 과목수는 %d개입니다.\n", n);
    printf("각 과목의 점수는 ");

    for (i = 0; i < n; i++)
    {
        printf("%d점\t", score[i]);
    }
    printf("입니다.\n");
    
    avg = (double)total / (double)n;

    printf("전체 과목의 평균은 %.2lf점 입니다.\n", avg);

    return 0;
}

int input(void)
{
    int input_num;

    printf("평균을 구할 과목 수를 입력해주세요: ");
    scanf("%d", &input_num);

    return input_num;
}