#include <stdio.h>

int swap_ptr(char **pa, char **pb);     //포인터의 저장된 주소 값을 포인터로 저장하기 위해 이중포인터사용.

int main(void)
{
    char *pa = "success";
    char *pb = "failure";

    printf("pa -> %s, pb -> %s\n", pa, pb);
    swap_ptr(&pa, &pb);     // 포인터pa, pb의 주소 값을 넘겨줘야함

    printf("pa -> %s, pb -> %s\n", pa, pb);

    return 0;
}

int swap_ptr(char **pa, char **pb)
{
    char *pt;

    pt = *pa;
    *pa = *pb;
    *pb = pt;

    return 0;
}