#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 행렬 최댓값 구하기
int main(void)
{
    int ary[10][10];
    int size_row = 0, size_column = 0;

    size_row = sizeof(ary)/sizeof(ary[0]);          // 행
    size_column = sizeof(ary[0])/sizeof(ary[0][0]); // 열
}
// 입력값 받는 함수
    void input_num(void)
    {
        scanf("%d", &num);
    }
//  배열 입력 함수 
void input_ary(double *pa, int size)
{
    int i;
    
    printf("%d개의 실수값 입력: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%lf", &pa[i]);
    }
    
}

// static 변수를 활용한 a+b 계산 함수
int* sum(int a, int b)
{
    static int res;
    res = a + b;

    return &res;
}

