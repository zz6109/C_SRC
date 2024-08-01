#include <stdio.h>

int main(void)
{
    double ary[5] = {1.2, 3.5, 7.4, 0.5, 10.0};
    double *pa = ary;
    double *pb = ary + 2;

    printf("%p\n", pb);
    printf("%p\n", pa);
    printf("%p\n", (ary + 2));
    
    printf("%p\n", pb - pa);

    for (int i = 0; i < 3; i++)
    {
        printf("%.1lf ", pb[i]);
    }
    
    return 0;
}