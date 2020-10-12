#include <iostream>
using namespace std;

int main()
{
	int i, j, n;

	cin >> n;
	i = 1;
	while (i <= (n - 1))
	{
		j = 1;
		if (n % 2 == 1)
		{
			while (j <= (n + i - 1))
			{
				if (j <= n - i)
					printf(" ");
				else
				{
					if (j == (n - i + 1) || j == (n + i - 1))
						printf("*");
					else
						printf(" ");
				}
				j++;
			}
		}
		else
		{
			while (j <= (n + i - 1))
			{
				if (j <= (n - i))
					printf(" ");
				else
				{
					if (j == (n - i + 1) || j == (n + i - 1))
						printf("*");
					else
						printf(" ");
				}
				j++;
			}
		}
		printf("\n");
		i++;
	}
	i = 1;
	while (i <= (2 * n - 1))
	{
		printf("*");
		i++;
	}
	return (0);
}
