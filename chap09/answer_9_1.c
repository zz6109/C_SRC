#include <stdio.h>

int main(void)
{
    int a =10;
    int* p = &a;
    double* pd = p; // int*를 double*에 넣을수 없다.

    printf("%d\n", *((int*)pd)); // 앞 * 는 참조 연산자고 뒤 * 포인터 선언 연산자

    return 0;
}