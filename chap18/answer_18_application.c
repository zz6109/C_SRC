#include <stdio.h>
#include <errno.h>
#include <string.h>
// 이것을 활용해서 /usr/bin에 명령으로 두 텍스트 파일의 값을 비교후 출력하는 것을 만들어 보자(ls, cd, pwd같은 느낌)

// b.txt에서 a.txt에 등록되지 않은 단어를 찾아 c.txt에 출력

int main(void)
{
    FILE *afp, *bfp, *cfp;
    int i, j, cnt = 0;
    char *ch;
    char a_word[10][20], b_word[10][20];
    afp = fopen("test_1.txt", "r");
    if (afp == NULL) 
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }
    for(i = 0; i < 10; i++)
    {
        ch = fgets(a_word[i], 20, afp);
        if (ch == NULL)
        {
            break;
        }
       // printf("a_word : %s\n", a_word[i]);
    }

    bfp = fopen("test_2.txt", "r");
    if (bfp == NULL) 
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }
    for(j = 0; j < 10; j++)
    {
        ch = fgets(b_word[j], 20, bfp);
        if (ch == NULL)
        {
            break;
        }
        // printf("b_word : %s\n", b_word[j]);
    }


    cfp = fopen("test_3.txt", "w");
    if (cfp == NULL) 
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ( strcmp(a_word[j], b_word[i]) == 0 )
            {
                cnt = 1;
            }
            
        }
        if (cnt == 0)
        {
            b_word[i][strlen(b_word[i])-1] ='\0';   // 파일에 입력시 개행문자를 널문자로 교체
            fprintf(cfp, "%s\n", b_word[i]);        // c.txt 파일에 등록되지 않은 문자열 입력
        }
        cnt = 0;
        
    }
    

    fclose(afp);
    fclose(bfp);
    fclose(cfp);
    
    return 0;
}
