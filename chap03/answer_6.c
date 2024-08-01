#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자 입력: ");
	scanf("%c", &ch);
	printf("입력하신 문자%c의 아스키코드 값은 %d입니다.\n", ch, ch);
	return 0;
}
