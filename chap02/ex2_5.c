#include <stdio.h>

int main(void)
{
	int num = 12;
	printf("%d\n",num);	//변수 num에 저장된  정수 상수 출력
	printf("%d\n",12);	//10진수 정수 상수 출력
	printf("%d\n",0b0110);	//2진수 정수 상수 출력
	printf("%d\n",014);	// 8진수 정수 상수 출력
	printf("%d\n",0xc);	//16진수 정수 상수 출력
	printf("%d\n",0Xc);
	printf("%d\n",0xC);
	
	printf("-----------------------------------------------------\n");

	printf("%d\n", 'A');	// 아스키 코드로 출력
	printf("%d\n", '\n');
	printf("%d\n", '\r');

	printf("-----------------------------------------------------\n");

	printf("%s\n", 'A');
	printf("%c\n", "A");
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "일");

	printf("-----------------------------------------------------\n");

	//printf("%d\n", 1e4);
	printf("%lf\n", 1e4);

	printf("%d\n", sizeof(10));
	printf("%d\n", sizeof(1e4));

	return 0;
}
