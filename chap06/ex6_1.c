#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 10; i += 2) // i = i + 2
    {
        printf("count %d\n", i);
    }
    printf("finish %d\n", i);
    return 0;
}