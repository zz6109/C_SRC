#include <stdio.h>
// 정렬 프로그램 예시
void print_ary(int *ary, int num);
void ascending_sort(int *ary, int num);
void descending_sort(int *ary, int num);

int input_num(int *ary, int num);

int main(void)
{
    int num, i, j;
    int num_ary[10];

    printf("입력할 정수 n개 입력: ");       //함수화
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("정수 %d번 입력 :", i+1);
        scanf("%d", &num_ary[i]);
    }
    
    printf("# 오름차순 정렬...");
    ascending_sort(num_ary, num);
    print_ary(num_ary, num);
    printf("\n");
    

    printf("# 내림차순 정렬...");
    descending_sort(num_ary, num);
    print_ary(num_ary, num);
    printf("\n");
    
    
    return 0;
}

void print_ary(int *ary, int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%3d ", ary[i]);        
    }
}

void ascending_sort(int *ary, int num)
{
    int temp = 0, i, j;
    for (i = 0; i < num; i++)           //오름차순  ascending_sort
    {
        for (j = i + 1; j < num; j++)
        {
            if (ary[i] > ary[j])
            {
                temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
            
        }
        
    }
}

void descending_sort(int *ary, int num)
{
    int temp = 0, i, j;
    for (i = 0; i < num; i++)       //내림차순  descendig_sort
    {
        for (j = i + 1; j < num; j++)
        {
            if (ary[i] < ary[j])
            {
                temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
            
        }
        
    }
}

int input_num(int *ary, int num)
{
    
}