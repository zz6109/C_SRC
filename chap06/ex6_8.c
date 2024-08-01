#include <stdio.h>
// 3의 배수 이면서 7의 배수인 수를 출력하시오 100까지
int main(void)
{
    int i;

    for (i = 1; i < 106; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
    
    }
    


    return 0;
}