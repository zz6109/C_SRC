#include <stdio.h>

int main(void)
{
    int num_A = 0, num_B = 0;

    printf("정수 A, B 입력: ");
    scanf("%d%d", &num_A, &num_B);

    int* A = &num_A;
    int* B = &num_B;

    printf("%s", (*A  > *B) ? "A는 B보다 크다" : "A는 B보다 작다");
    


    return 0;
}