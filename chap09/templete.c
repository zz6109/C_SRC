#include <stdio.h>
// 동적 할당까지 쓸수 있다면 int main(void)안에는 변수 선언과 함수만 넣고 ary[n]에 입력 함수로 n까지 값을 넣어줘서 20개의 수를 자동정렬 낮은순

// scanf를 이용해 ary에 값 저장하는 함수 선언
int main(void)
{
    int ary[5] = {5, 213, 23, 78, 99}; // 배열을 하나더 만들어서 거기에 임시로 저장하고 정렬이 완료 되면 다시 ary[3] 배열에 넣어준다?
    int temp[5];

    int n, cnt = 0;
    int i, j, k;
    int size = sizeof(ary)/sizeof(ary[0]);

    for (i = 0; i < size; i++)      //함수화 ary_sort
    {
        for (j = 0; j < size; j++)
        {
            if (ary[i] > ary[j])
            {
                cnt += 1;
            }
            
        }
        for (k = 0; k < size; k++)
        {
            if (cnt == k)
            {
                temp[k] = ary[i];
            }
            
        }
        cnt = 0;
    }

    for (i = 0; i < size; i++)      //함수화 input_value
    {
        ary[i] = temp[i];
    }
    for (i = 0; i < size; i++)      //함수화 print_ary
    {
        printf("%d\n", ary[i]);
    }
    
    
    return 0;
}