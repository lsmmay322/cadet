#include <iostream>
using namespace std;

int main()
{
	string str;
	int i = 0;
	
	cin >> str;
	while (str[i] != '\0')
	{
		while (i % 10 != 0)
			cout << str[i++];
		cout << endl;
	}
	return (0);
}
