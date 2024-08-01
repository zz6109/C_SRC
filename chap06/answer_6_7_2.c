#include <stdio.h>
// 1~100까지 소수를 구하는 프로그램
int main(void)
{
    int i, j, num = 0, cnt = 0;

    printf("2이상의 정수를 입력해 주세요: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
        
            
        }
        else
        {
            printf("%3d ", i);
            cnt += 1;
            if (cnt % 5 == 0)
            {
                printf("\n");
            }
            
        }
        
    }
    

    
    return 0;
}