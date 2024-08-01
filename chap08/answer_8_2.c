#include <stdio.h>
 

int main(void)  // DON'T_Worry_Be_Happy~
{
    int cnt = 0;
    char sentence[22];

    printf("문장 입력: ");
    scanf("%s", sentence);

    int size_sentence = sizeof(sentence);
    int size_sentence_0 = sizeof(sentence[0]);

    int size = size_sentence/size_sentence_0;

    for (int i = 0; i < size; i++)
    {
        if (sentence[i] < 91 && sentence[i] > 64 )
        {
            sentence[i] += 32;
            cnt++;
        }
        else
        {
            /* code */
        }
        
    }
    
    printf("바뀐 문장 : %s\b", sentence);
    printf("\n바뀐 문자 수: %d", cnt);

    return 0;
}

