#include <stdio.h>

int main()
{
	printf("%0*.*das\n", -2, 4, 8);
	printf("%*.*ias\n", 4,  -4, 8);
	printf("%.*ia\n", -4, 8);
	printf("%-.*ias\n", 4, 8);
}
