#include <stdio.h>

int put(int a);
int main()
{
	int a;
	int b;

	b = 2;
	if ((a = put(0)) == 10 && (b = put(10)) == 10)
		printf("ok\n");
	//b = 10;
	printf("%d", b);

}

int	put(int a)
{
	return (a);
}
