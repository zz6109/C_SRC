#include <stdio.h>
#define PI  3.141592        // 상수를 매크로 형으로 정의 PI에 3.14를 저장하는게 아닌 3.14로 치환해줌

int main(void)
{
    double radius, area;
    printf("실수 입력 : ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("%d", (int)area);
    
    return 0;
}