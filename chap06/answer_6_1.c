#include <stdio.h>

int main(void)
{
    int a = -1;
    while (a < 0)
    {
        scanf("%d", &a);
        // if (a < 0)
        // {
        //     printf("참\n");
        // }
        // else
        // {
        //     printf("거짓\n");
        //     break;
        // }
        printf("참\n");
    }
    printf("거짓\n");

    return 0;
}