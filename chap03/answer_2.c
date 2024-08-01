#include <stdio.h>

int main(void)
{
	int kor = 70;
	int eng = 80;
	int math = 90;
	int all_score = 0;

	all_score = kor + eng + math;

	printf("당신의 국어 점수는 %d입니다.\n", kor);
	printf("당신의 영어 점수는 %d입니다.\n", eng);
	printf("당신의 수학 점수는 %d입니다.\n\n", math);

	printf("당신의 전체 점수는 %d입니다.\n", all_score);

	return 0;
}
