#include <stdio.h>

int main(void)
{
    int ch;
    int cnt = 0;
    ch = getchar();     //HonGongClove

    while (ch != '\n')
    {
        if (96 < ch && 123 > ch)
        {
            cnt++;
        }
        ch = getchar();
    }
    printf("소문자의 개수 : %d\n", cnt);
    
    return 0;
}