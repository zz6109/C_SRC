#include <stdio.h>
#include <string.h>	//strcpy를 사용하기위한 라이브러리

int main(void)
{
	char fruit[20] = "strawberry"; 	// char 배열 선언과 문자열 초기화
					// strawberry가 10+1(널값)보다 커야함
	//fruit = "banana"; 대입연산이 불가능하다.
	strcpy(fruit, "banana");	// banana를 대입시켜줌 

	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 :%s%s\n", fruit, "Jam");

	return 0;
}

