#include <stdio.h>

void print_ary(int *pa, int cnt);    //함수 선언

int main(void)
{
    int ary[10] = {10, 20, 30, 40, 50};
    
    print_ary(ary, sizeof(ary)/sizeof(ary[0]));     // 함수 호출    sizeof(ary)/sizeof(ary[0]): (4*10) / 4 = 40(바이트) / 4(바이트)

    return 0;
}
void print_ary(int *pa, int cnt)
{
    int i;
    for (i = 0; i < cnt; i++)
    {
        printf("%d\n", *(pa + i));
    }
    
}