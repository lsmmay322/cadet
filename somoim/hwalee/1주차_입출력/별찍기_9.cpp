#include <iostream>
using namespace std;

int main()
{
	int i, j, n;
	
	cin >> n;
	i = 1;
	while (i <= (2 * n - 1))
	{
		j = 1;
		if (i <= n)
		{
			while (j <= (2 * n - i))
			{
				if (j < i)
					printf(" ");
				else
					printf("*");
				j++;
			}
		}
		else
		{
			while (j <= i)
			{
				if (j < (2 * n - i))
					printf(" ");
				else
					printf("*");
				j++;
			}
		}
		i++;
		printf("\n");
	}
	reuturn (0);
}
