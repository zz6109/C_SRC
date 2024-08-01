#include <stdio.h>

int main(void){
    int a = 0;

    printf("정수 a의 값을 입력해주세요.(2 > a > -2): ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("a는 0보다 작다.\n");
    }
    else if (a == 0)
    {
        printf("a는 0이다.\n");
    }
    else if (a > 0)
    {
        printf("a는 0보다 크다.\n");
    }
    else 
    {
        printf("a를 잘못 입력하셨습니다.\n");
    }
    return 0;
}