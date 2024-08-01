#include <stdio.h>
// 평균을 구하는 함수를 만들어 보자
double average(double x, double y);

int main(void)
{
    double a = 0.0, b = 0.0, result = 0.0;

    printf("평균을 구할 두 실수를 입력해 주세요: ");
    scanf("%lf%lf", &a, &b);

    result = average(a, b);

    printf("%.2lf", result);
    
    return 0;
}

double average(double x, double y)
{
    double temp;

    temp = (x + y) / 2;

    return temp;
}