#include <stdio.h>

int main(void)
{
    int ary[3];
    int *pa;
    int i;
    pa = ary;
    // pa[0] = 10;
    // pa[1] = 20;
    // pa[2] = 30;

    // ary[0] = 10;
    // ary[1] = 20;
    // ary[2] = 30;

    *(pa + 0) = 10;
    *(pa + 1) = 20;
    *(pa + 2) = 30;

    printf("배열의 값: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t", *pa);
        pa++;

    
    }
    
    return 0;
}