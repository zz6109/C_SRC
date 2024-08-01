#include <stdio.h>
// 1~100까지 소수를 구하는 프로그램
int main(void)
{
    int i, j, num = 1, cnt = 0;

    printf("    2  3  5  7");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            num += 1;
            if ((num % 2) == 0  || (num % 3) == 0)
            {

            }
            else if ((num % 5) == 0  || (num % 7) == 0)
            {

            }
            else
            {
                if (cnt % 5 == 0)
                {
                    printf("\n");
                }
                printf("%2d ", num);
                cnt += 1;
            }
            
            
        }
        
        
    }
    
    return 0;
}