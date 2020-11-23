#include <stdio.h>
#include "ft_printf.h"

int main()
{
	ft_printf("%1s\n", "abc");
	ft_printf("%.1s\n", "abc");
	ft_printf("%5.4s\n", "abcdef");
}
