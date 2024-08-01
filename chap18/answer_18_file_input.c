#include <stdio.h>
#include <errno.h>
#include <string.h>
//파일에 단어를 입력하는 프로그램

int main(void)
{
    FILE *fp;
    int ch, i;
    char word[10][20];
    char file_title[20];

    printf("파일명 : ");
    scanf("%s", file_title);

    fp = fopen(file_title, "w");
    if (fp == NULL) 
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    for (i = 0; i < 10; i++)
    {
        printf("파일에 입력할 문자 : ");
        //scanf("%19s", &word[i]);
        if (scanf("%19s", word[i]) == EOF)
        {
            break;
        }
        fprintf(fp, "%s\n", word[i]);
    }    
    fclose(fp);
    
    return 0;
}
