#include <iostream>
using namespace std;

int main()
{
	int n, j;

	cin >> n;
	int i = n;
	while (i)
	{
		j = 1;
		while (j <= i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i--;
	}
	return (0);
}
