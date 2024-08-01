#include <stdio.h>

int main(void)
{
    char str1[80] = "applejam";
    char str2[80] = "";

    printf("%s\n", str1);

    for (int i = 0; i < 80; i++)
    {
        str1[i] = str2[i];

    }
    
    printf("%s\n", str1);
    return 0;
}