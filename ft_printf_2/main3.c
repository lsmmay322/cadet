#include "ft_printf.h"

int main()
{
	int i = 21;
	printf("23. % -+07d %d\n", i, 1245);
	printf("24. % -+07d %d\n", -i, 1245);
	ft_printf("23. % -+07d %d\n", i, 1245);
	ft_printf("24. % -+07d %d\n", -i, 1245);
	}
