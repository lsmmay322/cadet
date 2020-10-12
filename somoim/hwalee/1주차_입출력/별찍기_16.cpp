#include <iostream>
using namespace std;

int main()
{
	int i, j, n;

	cin >> n;
	i = 1;
	while (i <= n)
	{
		j = 1;
		if (n % 2 == 1)
		{
			while (j <= (n + i - 1))
			{
				if (j <= (n - i))
					printf(" ");
				else
				{
					if (i % 2 == 1)
					{
						if (j % 2 == 1)
							printf("*");
						else
							printf(" ");
					}
					else if (i % 2 == 0)
					{
						if (j % 2 == 0)
							printf("*");
						else
							printf(" ");
					}
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
					if (i % 2 == 1)
					{
						if (j % 2 == 0)
							printf("*");
						else
							printf(" ");
					}
					else if (i % 2 == 0)
					{
						if (j % 2 == 0)
							printf(" ");
						else if (j % 2 == 1)
							printf("*");
					}
				}
				j++;
			}
		}
		if (i < n)
			printf("\n");
		i++;
	}
}
