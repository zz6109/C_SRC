#include <stdio.h>

int main(void)
{
	int seats = 70, audience = 65;
	double rate = 0.0; 
	
	rate = (double)audience * 100 / (double)seats;
	
	printf("입장률은 %.1lf이다.\n", rate);
	return 0;
}
