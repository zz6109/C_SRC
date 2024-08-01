#include <stdio.h>
void auto_func(void);
void static_func(void);

int main(void)
{
    int i;

    printf("일반 지역 변수(auto)를 사용한 함수...\n");
    for (i = 0; i < 3; i++) 
    {
        auto_func();        // 지역변수는 stack 영역에 저장 호출후 a 값을 초기화
    }

    printf("일반 지역 변수(auto)를 사용한 함수...\n");
    for (i = 0; i < 3; i++)
    {
        static_func();      // 전역변수와 비슷하게 작동 그래서 메모리에서 DATA(전역변수-초기값이 있음) 영역에 저장
    }
    return 0;
}

void auto_func(void)
{
    auto int a  = 0;

    a++;
    printf("%d\n", a);
}

void static_func(void)
{
    static int a  = 0;

    a++;
    printf("%d\n", a);
}