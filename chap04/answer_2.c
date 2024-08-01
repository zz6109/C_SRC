#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, total = 0;
	double avg = 0.0;	
	
	printf("두 과목의 점수: ");
	scanf("%d%d", &a, &b);

	total = a + b;
	avg = total / 2.0;

	printf("입력하신 점수의 평균은 %.1lf\n입니다.", avg);
		
	return 0;
}
