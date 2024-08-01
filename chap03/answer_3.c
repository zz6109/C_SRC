#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, sum = 0;

	printf("정수형 숫자1 입력 : ");
	scanf("%d", &num1);
	printf("정수형 숫자2 입력 : ");
	scanf("%d", &num2);

	sum = num1 + num2;

	printf("입력하신 숫자1과 숫자2의 합은 %d입니다.\n", sum);

	return 0;
}
