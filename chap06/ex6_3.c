#include <stdio.h>

int main(void)
{
    int a, b;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
            a = j;
        }
        printf("\n");
        
        b = i;
    }
    printf("%d %d\n", a, b);
    return 0;
}