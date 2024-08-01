#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;
    double *pd;

    pi = (int*)malloc(sizeof(int));
    if (pi == NULL)                         //동적 할당에 실패하면 NULL 포인터 변환
    {
        printf("# 메모리가 부족합니다.\n");
        exit(1);
    }

    pd = (double*)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("정수형으로 사용 : %d\n", *pi);
    printf("실수형으로 사용 : %.1lf\n", *pd);

    free(pi);                               // 해주지 않으면 힙영역에 저장된 값이 프로그램 종료 전까지 삭제되지 않는다.
    free(pd);
       
    return 0;
}