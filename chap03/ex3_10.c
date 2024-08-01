#include <stdio.h>

int main(void)
{
	char name[30];	// 이름을 입력할 변수
	int age = 0;	// 나이를 입력할 변수
	int birth = 0;	// 생년월일을 입력할 변수
	char blood_type;// 혈액형을 입력할 변수

	printf("귀하의 성명을 입력해주세요:");
	scanf("%s", name);
	printf("귀하의 나이를 입력해주세요:");
	scanf("%d", &age);
	printf("귀하의 생년월일을 입력해주세요:");
	scanf("%d", &birth);
	printf("귀하의 혈액형을 입력해주세요:");
	scanf(" %c", &blood_type);

	printf("입력된 정보는 다음과 같습니다.\n");
	printf("이름: %s\n나이: %d\n생년월일:%d\n혈액형: %c\n", name, age, birth, blood_type);
	printf("올바르게 입력 되었는지 확인해주십시오.\n");
	return 0;
}
