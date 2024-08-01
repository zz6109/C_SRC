#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct score_board
{
    int id;
    char *name;
    int kor_score;
    int eng_score;
    int math_score;
    int total_score;
    double avg_score;
    char grade;
    int cnt;
};

void print_student(struct score_board *student_list);   // 구조체를 함수에 값을 넘기려면 구조체 밑에 써야한다.

void input_info(struct score_board *student_list);

void score_sort(struct score_board *student_list);  // 이 함수를 헤더 파일로 만들어 보기



int main(void)
{
    struct score_board student_list[2];


    int i, j;

    student_list[0].cnt = sizeof(student_list)/sizeof(student_list[0]);       //구조체에 구조체를 넣어야함

    input_info(student_list);       // 값 입력

    printf("# 정렬 전 데이터...\n");    
    print_student(student_list);    
        
    printf("# 정렬 후 데이터...\n");
    score_sort(student_list);
    print_student(student_list);


    return 0;
}

void print_student(struct score_board *student_list)
{
    for (int i = 0; i < student_list[0].cnt; i++)
    {
        printf("%4d %s %4d%4d%4d%4d %4.1lf%3c\n", student_list[i].id, student_list[i].name, student_list[i].kor_score, student_list[i].eng_score, student_list[i].math_score, student_list[i].total_score, student_list[i].avg_score, student_list[i].grade);
    }
}

void input_info(struct score_board *student_list)
{

    int i, j;
    for (i = 0; i < student_list[0].cnt; i++)       //함수화
    {       
        printf("학번 : ");
        scanf("%d", &student_list[i].id);
        getchar();
        printf("이름 : ");
        student_list[i].name = (char *)malloc(30);
        fgets(student_list[i].name, 30, stdin);
        student_list[i].name[strlen(student_list[i].name)-1] = '\0';    //fgets 함수의 기능 문제를 해결하기 위함
        printf("국어, 영어, 수학점수 : ");
        scanf("%d%d%d", &student_list[i].kor_score, &student_list[i].eng_score, &student_list[i].math_score);
        student_list[i].total_score = student_list[i].kor_score + student_list[i].eng_score + student_list[i].math_score;
        student_list[i].avg_score = (double)student_list[i].total_score / 3.0;
        if (student_list[i].avg_score >= 90)
        {
            student_list[i].grade = 'A';
        }
        else if (student_list[i].avg_score >= 80)
        {
            student_list[i].grade = 'B';
        }
        else if (student_list[i].avg_score >= 70)
        {
            student_list[i].grade = 'C';
        }
        else
        {
            student_list[i].grade = 'F';
        }
        
    }
}

void score_sort(struct score_board *student_list)
{
    int i, j;
    struct score_board max;
    for (i = 0; i < student_list[0].cnt-1; i++)
    {
        for (j = i+1; j < student_list[0].cnt; j++)
        {
            if (student_list[i].avg_score < student_list[j].avg_score)
            {
                max = student_list[i];
                student_list[i] = student_list[j];
                student_list[j] = max;
            }
        
        }
    }
}