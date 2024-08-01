#include <stdio.h>
// 재귀호출 함수를 사용하여 1부터 10까지 합을 계산
//1부터 n까지의 합을 반환 하는 함수
int rec_func(int n);

int input(void);

int main(void)
{
    int result;
    int input_num;


    input_num = input();
    result = rec_func(input_num);

    printf("%d\n", result);
    return 0;
}

int rec_func(int n) // gpt의 도움을 받음
{
     if (n == 1) 
     {
        return 1;
     }
     else
     {
        return n + rec_func(n - 1);
     }
     
}

int input(void)
{
    int input_num;

    printf("정수 n의 값을 입력해주세요: ");
    scanf("%d", &input_num);

    return input_num;
}