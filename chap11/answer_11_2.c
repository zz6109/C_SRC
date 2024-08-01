#include <stdio.h>
// 입력한 단어중에서 가장 긴 단어의 길이를 출력
int main(void)
{
    char ch;
    int cnt = 0;

    while (1)
    {
        ch = getchar();    
        if (ch == '^Z')
        {
            break;    
        }
        
        
    }

    printf("가장 긴 단어의 길이 : %d\n", ch);
    return 0;
}