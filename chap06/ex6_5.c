#include <stdio.h>
// 1부터 25까지 5 마다 줄바꿈해서 출력할것
int main(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {

        for (j = 1; j < 11; j++)
        {
            printf("%3d ", j + (i*10));
        }
        printf("\n");
    }
    
    return 0;
}