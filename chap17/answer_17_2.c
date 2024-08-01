#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cracker
{
    int price;
    int calories;
};


int main(void)
{
    struct cracker product;

    printf("바사삭의 가격과 열량을 입력하세요 : ");
    scanf("%d%d", &product.price, &product.calories);

    printf("바사삭의 가격 : %d원\n", product.price);
    printf("바사삭의 열량 : %dKcal\n", product.calories);
    return 0;
}