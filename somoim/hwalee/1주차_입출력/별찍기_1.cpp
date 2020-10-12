#include <iostream>
using namespace std;

int main()
{
	int n;
	int i = 1;
	int j = 1;

	cin >> n;
	while (i <= n)
	{
		while (j <= i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);
}
