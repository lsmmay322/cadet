#include <iostream>
using namespace std;

int main()
{
	int n;
	int res = 0;

	cin >> n;
	while (n)
		res += n--;
	cout << res << endl;
	return (0);
}	
