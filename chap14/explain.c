#include <stdio.h>

int size_cul();

int main(void)
{
    int A[5][3];

    printf("size = %ld\n", sizeof(A));
    printf("size = %ld\n", sizeof(A[0]));
    printf("size = %ld\n", sizeof(A[0][0]));

    printf("size = %ld\n", sizeof(A)/sizeof(A[0]));
    printf("size = %ld\n", sizeof(A[0])/sizeof(A[0][0]));
    // sizeof(A[0])/sizeof(A[0][0])
    // sizeof(A)/sizeof(A[0])

    return 0;
}