#include <iostream>
using namespace std;

int main()
{
	int n;
	int i = 1;

	cin >> n;
	while (i <= 9)
		cout << n << " * " << i << " = " << n * i++ << '\n';
	return (0);
}
