#include <stdio.h>

int main(void)
{
    int i, j, cnt = 0;
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Be Happy~\n");
            cnt += 1;
            printf("%d\n", cnt);
        }
        
    }
    
    return 0;
}