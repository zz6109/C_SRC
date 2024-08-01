#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_str(char **p_str);

int main(void)
{
    char temp[80];
    char *str[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("문자열을 입력하세요 : ");
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = 0;
        str[i] = (char *)malloc(strlen(temp)+ 1);
        strcpy(str[i], temp);         // 깊은 복사
        //str[i] = temp;                  // 얕은 복사
        print_str(str);
    }

    for (i = 0; i < 3; i++)
    {
        free(str[i]);
    }
    
    
    return 0;
}

int print_str(char **p_str)
{
    int i;
    for (i = 0; i < 3; i++) // 함수화
    {
        printf("%s\n", *&p_str[i]);
    }
    return 0;
}