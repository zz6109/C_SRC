#include <stdio.h>

int main(void)
{
    int num_list[10];
    int input_num = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("%d번의 정수를 입력해주세요: ", i+1);
        scanf("%d", &num_list[i]);
    }
    


    while (1)   // 무한반복
    {
        printf("1부터 5까지 정수 하나를 입력해주세요: ");
        scanf("%d", &input_num);
        if (input_num >= 1 && input_num <= 5)   // input_num이 1보다 같거나 크고 5보다 같거나 작을경우가 참
        {
            printf("%d번에 저장된 값은 %d입니다.\n", input_num, num_list[input_num-1]);
        }
        else
        {
            break;
        }
        
        
                
    }
    
    return 0;
}