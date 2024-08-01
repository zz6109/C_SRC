#include <stdio.h>

int main(void)
{
    int a = 0, i = 1;

    // for (i = 0; i < 11; i++)
    // {
    //     a += 1;
    // }
    

    while (i < 11)
    {
        a += i; // a + 1, a + 2 ...
        i++;
    //  a += i; a + 2 , a + 3, a + 4 ...
    }

    printf("a :%d\n", a);
    printf("i :%d\n", i);

    return 0;
}