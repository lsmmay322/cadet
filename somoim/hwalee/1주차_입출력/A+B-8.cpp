#include <iostream>

using namespace std;

int main()
{
	int size, a, b;
	int n = 1;

	cin >> size;
	while (size--)
	{
		cin >> a >> b;
		cout << "Case #" << n++ << ": " << a << " + " << b << " = " << a + b << endl;
	}
	return (0)
}
