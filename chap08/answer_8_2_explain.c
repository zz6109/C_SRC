#include <stdio.h>

char str_convert(char *stc, int size_ary); // sentence를 소문자 변환 함수 선언

int main(void)  // DON'T_Worry_Be_Happy~
{
    int cnt = 0;
    char sentence[22];

    printf("문장 입력: ");
    scanf("%s", sentence);

    int size_sentence= sizeof(sentence);

    str_convert(sentence, size_sentence);
    
    printf("바뀐 문장 : %s\n", sentence);
    printf("바뀐 문자 수: %d\n", cnt);

    return 0;
}

char str_convert(char *stc, int size_ary)     // 두개의 값을 반환 받으려면 어떻게 해야 하나요? 구조체를 활용해야 가능
{
    int size = size_ary/sizeof(char);
    //int size = sizeof()/sizeof(char);  // 왜 stc가 8이고 stc[0]이 1인가?
    
    for (int i = 0; i < size; i++)
    {
        if (stc[i] < 91 && stc[i] > 64)     // 왜 B부터 변환이 안되나?  size = 8/1임
        {
            stc[i] += 32;
            
        }
        else
        {

        }
    }

    return *stc;
}
