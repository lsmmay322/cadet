#include <iostream>
using namespace std;

int main()
{
	int i, j, n;

	cin >> n;
	i = n;
	while (i)
	{
		j = 1;
		while (j <= n)
		{
			if (j <= (n - i))
				printf(" ");
			else
				printf("*");
			j++;
		}
		printf("\n");
		i--;
	}
	return (0);
}
