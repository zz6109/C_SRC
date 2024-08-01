#include <stdio.h>

int main(void)
{
	int weight = 0;
	double height = 0.0, bmi = 0.0;

	printf("당신의 몸무게와 키를 입력해주세요: ");
	scanf("%d%lf", &weight, &height); 

	bmi = (double)weight / (height * height);
	printf("%s", ((20.0 <= bmi) && (25 >= bmi)) ? "표준입니다." : "체중관리가 필요합니다.");
	return 0;
}
