#include <stdio.h>

struct score
{
    int kor;
    int math;
    int eng;
};


int main(void)
{
    struct score yuni = {90, 80, 70};
    struct score *ps = &yuni;

    printf("국어 : %d\n", (*ps).kor);      //ps->kor; *<. 우선순위
    printf("영어 : %d\n", ps->eng);
    printf("수학 : %d\n", ps->math);
    
    return 0;
}