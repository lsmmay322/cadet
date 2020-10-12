#include <iostream>
using namespace std;

int main()
{
	int i, j, k;
	int n;

	cin >> n;
	i = 1;
	while (i <= n)
	{
		j = 1;
		k = 1;
		while (j <= (n - i))
		{
			printf(" ");
			j++;
		}
		while (k <= (2 * i - 1))
		{
			printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
	return (0);
}			
