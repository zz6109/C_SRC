#include <stdio.h>
// 정수 사칙 연산 계산기
int main(void)
{
    int num_A = 0, num_B = 0;
    char simbol;

    printf("계산하고자 하는 정수식을 입력해주세요: ");
    scanf("%d%c%d", &num_A, &simbol, &num_B);

    if (simbol == '+')
    {
        printf("%d + %d = %d\n", num_A, num_B, num_A + num_B);
    }
    else if (simbol == '-')
    {
        printf("%d - %d = %d\n", num_A, num_B, num_A - num_B);
    }
    else if (simbol == '*')
    {
        printf("%d * %d = %d\n", num_A, num_B, num_A * num_B);
    }
    else if (simbol == '/')
    {
        printf("%d / %d = %d\n", num_A, num_B, num_A / num_B);
    }

    return 0;
}