#include <iostream>
using namespace std;

int main()
{
	int n, min, max;
	int *arr;
	int i = 0;

	cin >> n;
	arr = new int[n];
	while (i < n)
		cin >> arr[i++];
	min = arr[0];
	max = arr[0];
	i = 1;
	while (i < n)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
		i++;
	}
	cout << min << " " << max << endl;
	return (0);
}
