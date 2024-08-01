#include <stdio.h>
// 1부터 100까지 짝수만 더하면 ?
int main(void)
{
    int i, sum = 0;
    for (i = 1; i < 101; i++)
    {
        if ((i % 3) != 0)
        {
            continue;
        }
        sum += i;
    }
    printf("%d", sum);
    
    return 0;
}