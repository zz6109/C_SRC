#include <stdio.h>

int main(void)
{
	int kor = 3, eng = 5, mat = 4, credits = 0, res;
	double kscore = 3.8, escore = 4.4, mscore = 3.9, grade = 0.0;

	credits = kor + eng + mat;
	grade = (kscore + escore + mscore) / 3;

	res = (credits >= 10) && (grade > 4.0);
	printf("결과가 참이면 1, 거짓이면 0이 나올것이다. 결과: %d\n", res);
	return 0;
}
