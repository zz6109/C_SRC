#include <stdio.h>

int sum(int x, int y);

int main(void)
{
    int res_A = 0, res_B = 0;

    res_A = sum(5, 10);
    res_B = sum(60, 100);

    printf("%d\t%d\n", res_A, res_B);
    
    return 0;
}

int sum(int x, int y)
{
    int temp = 0;

    for (int x;  x < y; x++)
    {
        temp += x; 
    }
    /*
    for (int i = x;  i < y; i++)
    {
        temp += i; 
    }
    */
    return temp;
}