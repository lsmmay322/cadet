#include <iostream>
using namespace std;

int main()
{
	int n, j, i;

	cin >> n;
	i = 1;
	while (i <= (2 * n - 1))
	{
		j = 1;
		if (i <= n)
		{
			while (j <= n)
			{
				if (j <= (n - i))
					printf(" ");
				else
					printf("*");
				j++;
			}
		}
		else
		{
			while (j <= n)
			{
				if (j <= (i - n))
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


