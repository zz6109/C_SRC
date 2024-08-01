// 이렇게 밖에 못만들어? 
/* 추가 하고 싶은 사항
1. 2, 3, 5, 7을 어떻게 배열에 추가할것인가..
2. 제곱근이 소수점이 나와도 정수형으로 캐스팅하게끔 구현
3. num에 따른 동적할당
4. 100까지가 아니라 int의 최고숫자까지 가능하게끔 구현
*/

#include <stdio.h>
// 제곱근을 구하기 위한 라이브러리
#include <math.h> 
// 소수 출력 프로그램
// 정수 입력 함수 선언
int input_func(void);
// 정수 나열 함수 선언
int num_list_func(int* N_P_pn, int x);
// 5부터 x 까지의 홀수를 저장하는 함수 선언
int odd_list_func(int* odd_num, int x);

int main(void)
{
    int num = input_func();
    int N_P_prime_number[33];
    int prime_number[30];
    int odd_num[3];
    int i, j, x, cnt1 = 0, cnt2 = 0;
    
    for (i = 0; i < num; i++)     // 제곱근이 소수점이 나오면 작동이 안됨
    {
        if (num == i*i)
        {
            x = i;
        }
        
    }
     num_list_func(N_P_prime_number, x);
     odd_list_func(odd_num, x);

    
    for (i = 0; i < 33; i++)
    {
        if (N_P_prime_number[i] % odd_num[0] == 0)
        {
            
        }
        else if (N_P_prime_number[i] % odd_num[1] == 0)
        {
            
        }
        else
        {
            prime_number[cnt1] = N_P_prime_number[i];
            cnt1++;
        }
        
    }

    
     
    for (i = 0; i < 26; i++)
    {
        printf("%4d", prime_number[i]);
    }
    

    return 0;
}

// 정수 입력 함수
int input_func(void)
{   
    int num;
    printf("2 이상의 정수를 입력해주세요: ");
    scanf("%d", &num);

    return num;
}

// 100까지 소수(5와 7의 배수 제외)를 배열에 저장
int num_list_func(int* N_P_pn, int x)
{

    int i, j, cnt = 1, num = 0;

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            cnt += 1;

            if (cnt % 2 ==0)
            {
                /* code */
            }
            else if (cnt % 3 == 0)
            {
                /* code */
            }
            else
            {   
                if (num > 33)
                {
                    break;
                }
                else
                {
                    N_P_pn[num] = cnt;
                    num++;
                }
            
            }
            
        }
        
    }

    return 0;
}
// 홀수 저장 함수 
int odd_list_func(int* odd_num, int x)
{
    int cnt = 0;
    for (int i = 5; i < x; i++)
    {
        if (i % 2 == 0)
        {
            /* code */
        }
        else
        {
            odd_num[cnt] = i;
            cnt++;
        }
        
        
    }

    return 0;
}