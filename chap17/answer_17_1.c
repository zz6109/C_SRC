#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_book(first_book);

struct book
{
    char title[100];
    char author[100];
    char * intro;
    int page;
    int price;
};


int main(void)
{
    struct book first_book, second_book;

    strcpy(first_book.title, "혼공C");
    strcpy(first_book.author, "서현우");
    first_book.page = 664;
    first_book.price = 26000;
    first_book.intro = (char *)malloc(80);
    // printf("책 내용 간단한 소개 : ");
    // fgets(first_book.intro, 80, stdin);

    print_book(first_book);

    
    return 0;
}

int print_book(struct book first_book)
{
    printf("책 제목 : %s\n", first_book.title);
    printf("책 저자 : %s\n", first_book.author);
    printf("총 페이지 수 : %d쪽\n", first_book.page);
    printf("책 가격 : %d원\n", first_book.price);

    return 0;

}