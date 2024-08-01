#include <stdio.h>

int main(void)  // 키와 몸무게를 입력해서 bmi를 계산하고 저체중, 정상체중, 과체중을 판별하는 문제 만들기
{
    double height = 0.0, weight = 0.0, bmi = 0.0;

    printf("당신의 키와 몸무게를 입력해 주세요.: ");
    scanf("%lf%lf", &height, &weight);

    height *= 0.01; // 단위를 맞춰주려고 cm를 m로 변환, kg * m로 계산 되어야함

    bmi = weight / (height * height);

    if (bmi > 25.0)
    {
        printf("과체중입니다.\n");
    } 
    else if ((25.0 >= bmi) && (20.0 <= bmi))
    {
        printf("정상체중 입니다.\n");
    }
    else if (bmi < 20.0)
    {
        printf("저체중 입니다.\n");
    }
    
}