#include <stdio.h>

int input_data(void);       // ����� �Է��ϰ� �� ���� ��ȯ
double average(void);       // ����� ���ϴ� �Լ�
void print_data(double);    // ��� �Լ�

int count = 0;              // �Է��� ����� �� ����
static int total = 0;       // �Է��� ����� ��

int main(void)
{
	double avg;             // �Է��� ����� ���

	total = input_data();   // ����� �Է��ϰ� �� ���� ��ȯ
	avg = average();        // ��� ���
	print_data(avg);

	return 0;
}

void print_data(double avg)
{
	printf("입력한 양수의 개수 : %d\n", count);
	printf("전체 합과 평균 : %d, %.1lf\n", total, avg);
}