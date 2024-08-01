#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct profile
{
    char name[20];
    int age;
    double height;
    char *intro;
};

int main(void)
{
    struct profile hwan;

    strcpy(hwan.name, "김재환");
    hwan.age = 26;
    hwan.height = 184.7;

    hwan.intro = (char *)malloc(80);
    printf("자기소개 : ");
    fgets(hwan.intro, 80, stdin);

    printf("이름 : %s\n", hwan.name);
    printf("나이 : %d\n", hwan.age);
    printf("신장 : %.1lf\n", hwan.height);
    printf("자기소개 : %s\n", hwan.intro);
    return 0;
}