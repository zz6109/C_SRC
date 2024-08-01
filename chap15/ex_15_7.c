#include <stdio.h>

int sum(int, int);

int main(void)
{
    int (*fp)(int, int);        // 함수를 포인터변수로 선언?
    int res;

    fp = sum;                   // sum함수의 반환 식을 fp에 저장
    res = fp(10, 20);           // 반환식에 10, 20을 넣어 연산된 값을 res에 저장
    printf("result : %d\n", res);

    return 0;
}

int sum(int a, int b)
{
    return (a + b);
}