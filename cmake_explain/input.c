#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ����� ���� ��ũ��
#include <stdio.h>

extern int count;                 // main.c의 전역 변수 count 공유
int total = 0;                    // ���� ���� ����

int input_data(void)
{
	int pos;                      // ��� ����

	while (1)
	{
		printf("양수 입력 : ");
		scanf("%d", &pos);        // ��� �Է�
		if (pos < 0) break;       // ������ �Է� ����
		count++;                  // ���� ����
		total += pos;             // �Է°��� ���� ���� total�� ����
	}

	return total;                 // ���� ���� total�� �� ��ȯ
}