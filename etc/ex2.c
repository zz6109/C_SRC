#include <stdio.h>

int main(void){
    int hour, min, p_hour, p_min;
    scanf("%d%d" , &hour , &min);
    scanf("%d", &p_min);

    p_hour = p_min / 60; // 입력값이 1000(분)일때 추가될 시간
    p_min = p_min % 60; // 추가된 시간을 뺀 분


    min += p_min;

    if (min > 60)
    {
        min -= 60;
        hour += 1;
        if (min == 60)
        {
            min -= 60;
            hour += 1;
        }
        
    }

    if (hour == 24)
    {
        hour = 0;
    }
    
    
    
    printf("%d %d\n", hour, min);

    return 0;
}
