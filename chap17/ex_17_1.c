#include <stdio.h>

struct student      // 구조체 선언
{
    int num;        // 멤버 변수
    double grade;
};                  // 반드시 ;을 입력해야함

int main(void)
{
    struct student s1;

    s1.num = 2;
    s1.grade = 2.7;

    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);
        
    return 0;
}