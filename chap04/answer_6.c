#include <stdio.h>

int main(void)
{
	int hour = 0, min = 0, sec = 0;
	double time = 3.76;

	hour = (int)time;
	min = (time - (double)hour) * 60;
	sec = (((time - (double)hour) *60) - (double)min) * 60 ;

	printf("%.2lf시간은  %d시간 %d분 %d초 입니다.\n", time, hour, min, sec);
	
	return 0;
}
