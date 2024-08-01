#include <stdio.h>

int func(int a, int num);

int main(void)
{   
    /*
    char s = '/', b_s = '\\', brk_f = '(', brk_r = ')', bar = '|', u_b = '_', space = ' ', col = '\'';
    printf("%c%c%c%c%c%c%c%c\n", b_s, space, space, space, space, s, b_s, space);
    printf("%c%c%c%c%c%c%c%c\n", space, brk_r, space, space, brk_f, space, col, brk_r);
    printf("%c%c%c%c%c%c%c%c\n", brk_f, space, space, s, space, space, brk_r);
    printf("%c%c%c%c%c%c%c%c\n", space, b_s, brk_f, u_b, u_b, brk_r, bar, space);
    */
   int a = 385;
   int num = 0;

   num = func(a, 1000);

   printf("%d\n", (a/1)%10);        // (a/1)%10을 계산 하는 함수 구현
   printf("%d\n", (a/10)%10);
   printf("%d\n", (a/100)%10);
}

int func(int a, int num)
{
    
}
