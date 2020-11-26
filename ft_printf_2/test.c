#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *i;
	int x = 2;
	i = &x;
	printf("%p\n", i);
	printf("%x\n", i);
	printf("%x\n", &x);
	printf("%p\n", &x);
	printf("%s", NULL);
}
