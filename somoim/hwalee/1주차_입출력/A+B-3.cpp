#include <iostream>

using namespace std;

int main()
{
	int size, i, a, b;

	cin >> size;
	i = 0;
	while (i++ < size)
	{
		cin >> a;
		cin >> b;
		cout << a + b << endl;
	}
	return (0);
}
