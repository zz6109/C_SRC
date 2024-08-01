#include <stdio.h>

int main(void)
{
	// 정수와 실수의 합을 구하는 프로그램을 짜보자.
	int int_num = 0;
	double dou_num = 0.0;
	double int_dou_sum = 0.0;

	printf("정수형 숫자를 입력해주세요:");
	scanf("%d", &int_num);
	printf("실수형 숫자를 입력해주세요:");
	scanf("%lf", &dou_num);

	int_dou_sum = int_num + dou_num;

	printf("정수형 숫자%d와 실수형 숫자%lf의 합은 %lf입니다.\n", int_num, dou_num, int_dou_sum);

	return 0;
}
