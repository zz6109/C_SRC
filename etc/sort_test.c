#include <stdio.h>
#include <int_double_sort.h>

int main(void)
{
    int ary[10] = {2, 3, 6, 8, 9, 20, 28, 14, 88, 1};

    int_ascending_sort(ary, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%3d", ary[i]);
    }
    printf("\n");
}