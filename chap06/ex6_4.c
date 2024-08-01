#include <stdio.h>

int main(void)
{
    int i, j, cnt = 10;

    for (i = 1; i < 10; i++)
    {
        printf("%d의 구구단\n", i);
        for (j = 0; j < 10; j++)
        {
            printf("%d * %d = %d\n", i , j, i * j);
            
        }
        printf("\n");
    }
    

    return 0;
}