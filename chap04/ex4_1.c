#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a)*3;
	post = (b++)*3;

	printf("initial value a = %d, b = %d\n", a, b);
	printf("pre: (++a) * 3 = %d, post: (b++) * 3 = %d\n", pre, post);

	return 0;
}
