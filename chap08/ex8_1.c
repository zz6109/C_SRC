#include <stdio.h>

int main(void)
{
    int ary[101];

    for (int i = 0; i <= 100; i++)
    {
        ary[i] = i;
    }
    
    for (int i = 1; i < 101; i++)
    {
        if (i % 5 == 0)   // i가 0 일때 줄바꿈을 하면 안됨
        {
            printf("%3d\n", ary[i]);
        }
        else
        {
            printf("%3d ", ary[i]);    
        }
        
        
    }
    
    
    return 0;
}