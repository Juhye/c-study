#include <iostream>
using namespace std;

int main()
{
	int t, a, b, c;
	cin >> t;

	for (; t > 0; --t)
	{
		cin >> a >> b >> c;

		if (c >= a + b)
			cout << 0 << endl;

		else
		{
			if (a == b && b == c)//Á¤»ï°¢Çü
			{
				cout << 1 << endl;
			}

			else if (a*a + b * b == c * c)//Á÷°¢»ï°¢Çü
			{
				cout << 2 << endl;
			}

			else if (a == b || b == c || a == c)//ÀÌµîº¯»ï°¢Çü
			{
				cout << 3 << endl;
			}
			else
				cout << 4 << endl;
		}

	}
}