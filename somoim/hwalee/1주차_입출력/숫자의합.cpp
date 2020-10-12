#include <iostream>
using namespace std;

int main()
{
	int size;
	int *num;
	int i = 0;
	int res = 0;

	cin >> size;
	num = new int[size];
	while (i < size)
		cin >> num[i++];
	while (size)
		res += num[size--];
	cout << res << endl;
	return (0);
}
