#include <stdio.h>
#include "student.h"        // 같은 폴더내에 있을경우 ""로 감싸줘야함
int main(void)
{
    Student a = {315, "홍길동"};
    printf("학번 : %d, 이름 : %s\n", a.num, a.name);
    return 0;
}