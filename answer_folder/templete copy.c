#include <stdio.h>

int main(void)
{
    int ary[3];
    int *pa = ary;

    printf("%lu", sizeof(pa));
    printf("%lu", sizeof(pa));
    return 0;
}