#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main()
{
	int x = 2;
	int *y = &x;
/* 	printf("1. %c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0);
	ft_printf("2. %c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0);
	ft_printf("3. %u", 4294967284); */
	printf("%p\n", y);
	ft_printf("%p\n", y);
}
