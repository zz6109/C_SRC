#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **matrix[5] = (int **)malloc(4 * sizeof(int *));
    int i;

    for (i = 0; i < 4; i++)
    {
        matrix[i] = (int*)malloc(5*sizeof(int));
    }
    
    return 0;
}