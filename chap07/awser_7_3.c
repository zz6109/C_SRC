#include <stdio.h>
// 1부터 n 까지 합을 구하는 sum 함수 
int sum(int n);
// n을 입력하는 함수
int input(void);    

int main(void)
{
    int result_A, result_B;

    result_B = input();

    result_A = sum(result_B);

    printf("1부터 %d까지의 합은 %d이다.\n", result_B, result_A);

    return 0;
}

int sum(int n)
{
    int temp = 0;

    for (int i = 1; i < (n+1); i++)
    {
        temp += i; 
    }
    
    return temp;
}

int input(void)
{
    int input_num;

    printf("정수 n의 값을 입력해주세요: ");
    scanf("%d", &input_num);

    return input_num;
}
