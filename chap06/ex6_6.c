#include <stdio.h>
// 1부터 100까지 짝수만 더하면 ?
int main(void)
{
    int i, j = 0;
    
    for (i = 2; i < 102; i += 2)
    {
        printf("%d ", i);
        j += i;
    }
    printf("\n%d", j);
    

    
    return 0;
}