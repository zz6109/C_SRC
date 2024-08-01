#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int *pa = &a, *pb = &b;
    int **ppa = &pa, **ppb = &pb;
    int *pt;

    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;

    printf("%u %u %d", pa, *ppa, **ppa);

    return 0;
}