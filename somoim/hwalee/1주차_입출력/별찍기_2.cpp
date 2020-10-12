#include <iostream>
using namespace std;

int main()
{
	int n, j;
	int i = 1;

	cin >> n;
	while (i <= n)
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
		i++;
	}
	return (0);
}
