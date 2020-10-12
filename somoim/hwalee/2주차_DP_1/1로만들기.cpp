#include <iostream>
using namespace std;

# define MIN(a, b) (a > b ? b : a)

int arr[10000001];

int	check(int i, int n)
{
	if (i <= n)
	{
		if (i % 6 == 0)
			arr[i] = MIN(MIN(arr[i / 3], arr[i / 2]), arr[i - 1]) + 1;
		else if (i % 2 == 0)
			arr[i] = MIN(arr[i / 2], arr[i - 1]) + 1;
		else if (i % 3 == 0)
			arr[i] = MIN(arr[i / 3], arr[i - 1]) + 1;
		else
			arr[i] = arr[i - 1] + 1;
		check(i + 1, n);
	}
	if (i == 2)
		return arr[n];
}

int		main()
{
	int n;

	cin >> n;
	if (n == 1)
		arr[1] = 0;
	else
		check(2, n);
	printf("%d", arr[n]);
	return (0);
}
