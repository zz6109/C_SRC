#include <stdio.h>

union ex_17_10
{
    int i;
    short sh;
    char ch;
};


int main(void)              // 리틀엔디언 방식의 예제
{
    union ex_17_10 num = {0x12345678};

    printf("i : %12p\n", num.i);
    printf("sh : %12p\n", num.sh);
    printf("ch : %12p\n", num.ch);
    
    return 0;
}