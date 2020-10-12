#include <iostream>
using namespace std;

int main()
{
	int month, day;
	int n = 1;
	int n_d = 0;
	int nam;
	string date[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

	cin >> month >> day;
	while (n < month)
	{
		if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
			n_d += 31;
		else if (n == 2)
			n_d += 28;
		else if (n == 4 || n == 6 || n == 9 || n == 11)
			n_d += 30;
		n++;
	}
	n_d += day;
	nam = n_d % 7;
	if (nam >= 0 && nam <= 6)
		cout << date[nam] << endl;
	return (0);
}
