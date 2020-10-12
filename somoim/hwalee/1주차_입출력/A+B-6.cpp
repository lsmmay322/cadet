#include <iostream>

using namespace std;

int main()
{
	int size;
	int a, b;

	cin >> size;
	while(size--)
	{
		scanf("%d%*c%d", &a, &b);
		cout << a + b << endl;
	}
	return (0);
}
