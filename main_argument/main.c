#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])    //어느 위치에서 던지 return하면 종료된다, 3개 이하 들어오면 정지
{
    // printf("argc : %d\n", argc);
    // // argv의 0 요소 출력
    // printf("argv : %s\n", argv[1]);

    int loop = 0;

    char answer;

    for (int i = 0; i <  argc; i++)     // 입력된 값의 갯수 측정
    {
        if (argc == 3)
        {
            for (int i = 1; i < argc; i++)
            {
                printf("입력하신 값은 : %s입니다.\n", argv[i]);
            }
            

            while (loop == 0)
            {
                loop = 1;
                printf("입력하신 값의 합을 구하시겠습니까? 'y' or 'n': ");
                scanf("%c", &answer);
                if (answer == 'y')
                {
                    printf("%s + %s = %d\n", argv[1], argv[2], atoi(argv[1]) + atoi(argv[2]));
                    break;
                }
                else if (answer == 'n')
                {
                    break;
                }
                else if (answer != 'y' && answer != 'n')
                {
                    printf("'y' 또는 'n'만 입력해주세요.\n");
                    loop = 0;
                    // 반복되지 않게 막기
                }
            }
            
            return 0;

            
            
        }
        else if (argc > 3)
        {
            printf("입력 값이 초과 됩니다\n");
            return 0;
        }
        
        else
        {
            printf("입력값이 모자랍니다.\n");
            return 0;
        }
        
    }

    //printf("%s + %s = %d\n", argv[1], argv[2], atoi(argv[1]) + atoi(argv[2]));    //문자를 숫자로 변환해서 더하기

    // if (argv[1] == '1')
    // {
    //     printf("1입니다.");
    // }
    // else
    // {
    //     printf("error");
    // }
    

    


    return 0;
}