#include <stdio.h>
// A배열의 값을 복사해서 B배열에 채운후 B배열 출력
int main(void)
{
    int A[3] = {1, 2, 3};
    int B[10];
    int size_B = 0;

    int i;

    size_B = sizeof(B)/sizeof(B[0]);

    for (i = 0; i < size_B; i++)
    {
        B[i] = A[i];
    }
    
    for (i = 0; i < size_B; i++)
    {
        printf("%d\t", B[i]);
    }
    
    
    return 0;
}