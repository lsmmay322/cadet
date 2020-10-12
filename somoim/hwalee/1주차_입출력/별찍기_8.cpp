#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int n;

	cin >> n;
	i = 1;
	while (i <= (2 * n - 1))
	{
		j = 1;
		if (i <= n)
		{
			while (j <= 2 * n)
			{
				if (j >= (i + 1) && j <= (2 * n - i))
					printf(" ");
				else
					printf("*");
				j++;
			}
		}
		else
		{
			while (j <= 2 * n)
			{
				if (j >= (2 * n - i + 1) && j <= i)
					printf(" ");
				else
					printf("*");
				j++;
			}
		}
		printf("\n");
		i++;
	}
	return (0);
}
