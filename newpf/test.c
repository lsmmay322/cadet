#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main()
{
	int *i;
	int x = 2;
	i = &x;
	ft_printf("%.*d", -4, 0);
}
