#include <stdio.h>

int main(void)
{
    int a;  // a는 공간
    double b;
    char c;

    int *pa;

    pa = &a; // a라는 공간의 주소를 pa에 저장
    *pa = 100;  //pa의 써있는 주소에 100이라는 값을 넣어 준다. 

    printf("a 변수의 주소 : %p\n", &a);
    printf("pa에 저장된 변수의 주소 : %p\n", pa);
    
    printf("포인터로 a값 출력 : %d\n", *pa);
    printf("변수명으로 a값 출력 : %d\n", a);

    if (*pa == a)
    {
        printf("1\n");
    }
    
    if (a == *pa)
    {
        printf("2\n");

    }
    
    

    return 0;
}