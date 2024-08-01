#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    int ary[10] = {13, 10, 13, 13, 10, 26, 13, 10, 13, 10};     // 아스키 코드값을 보면 알수 있음
    int i, res;
    
    fp = fopen("a.txt", "wb");
    // if (fp == NULL)
    // {
    //     printf("파일이 열리지 않았습니다: %s\n", strerror(errno));
    //     return 1;
    // }
    for (i = 0; i < 10; i++)
    {
        fputc(ary[i], fp);
    }
    fclose(fp);


    fp = fopen("a.txt", "rt");
    while (1)
    {
        res = fgetc(fp);
        if (res == EOF)
        {
            break;
        }
        printf("%4d",res);
    }
    fclose(fp);
 
    return 0;
}
