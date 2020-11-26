#include <stdio.h>
#include "ft_printf.h"

int main()
{
 		int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*u = "-0";
	unsigned int jj = -12;



/* 	printf("%*.*u\n", 42, 25, j);
		fflush(stdout);
	ft_printf("%*.*u\n", 42, 25, j);
	printf("%04.3% %d\n", 1);
	ft_printf("%04.3% %d\n", 1);
	printf("%0*.% %d\n", -1, 1);
	ft_printf("%0*.% %d\n", -1, 1); */
	fflush(stdout);
	ft_printf("%d\n", 2);
	ft_printf("%x\n", 5);
	ft_printf("%u\n", 5);

}
