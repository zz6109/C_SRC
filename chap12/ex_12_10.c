#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80] = "applejam";

    str[8] = 'A';
   // scanf("%s", str);
    printf("입력 후 문자열: %s\n", str);
    
    return 0;
}