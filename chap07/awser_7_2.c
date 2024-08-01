#include <stdio.h>

double centi_to_meter(int H);

int main(void)
{
    int h = 0;
    double result = 0.0;

    printf("당신의 키를 입력해 주세요: ");
    scanf("%d", &h);

    result = centi_to_meter(h);

    printf("%.2lfm 입니다.\n", result);

    return 0;
}

double centi_to_meter(int H)
{
    double temp;

    temp = H * 0.01;

    return temp;
}