#include <iostream>

using namespace std;

int main()
{
	int a, b, size;
	int n = 1;

	cin >> size;
	while (size--)
	{
		cin >> a >> b;
		cout << "Case #" << n++ << ": "  << a + b << endl;
	}
	return (0);
}
