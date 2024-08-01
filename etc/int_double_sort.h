#include <stdio.h>
//int 배열을 오름차순으로 정렬(배열, 요소 수)
void int_ascending_sort(int *ary, int num);
//double 배열을 오름차순으로 정렬(배열, 요소 수)
void double_ascending_sort(double *ary, double num);
//int 배열을 내림차순으로 정렬(배열, 요소 수)
void int_descending_sort(int *ary, int num);
//double 배열을 내림차순으로 정렬(배열, 요소 수)
void double_descending_sort(double *ary, double num);

void int_ascending_sort(int *ary, int num)      //int 배열을 오름차순으로 정렬
{
    int temp = 0, i, j;
    for (i = 0; i < num; i++)       //
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

void int_descending_sort(int *ary, int num)
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
void double_ascending_sort(double *ary, double num)
{
    double temp = 0;
    int i, j;
    for (i = 0; i < num; i++)       //오름차순  
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

void double_descending_sort(double *ary, double num)
{
    double temp = 0.0;
    int i, j;
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
