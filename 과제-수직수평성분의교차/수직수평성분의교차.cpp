#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int t, list[8], sum;
	;
	cin >> t;

	for (; t > 0; --t)
	{
		cin >> list[0] >> list[1] >> list[2] >> list[3] >> list[4] >> list[5] >> list[6] >> list[7];

		if (list[0] != list[2])
		{
			for (int i = 0; i <= 3; ++i)
			{
				sum = list[i + 4];
				list[i + 4] = list[i];
				list[i] = sum;

			}
		}

		if (list[1] < list[3])//ay<by老 版快
		{
			sum = list[3];
			list[3] = list[1];
			list[1] = sum;
		}
		if (list[4] < list[6])//cx<dx老 版快
		{
			sum = list[6];
			list[6] = list[4];
			list[4] = sum;
		}

		if (list[6] <= list[0] && list[0] <= list[4] && list[3] <= list[5] && list[5] <= list[1])
		{
			if (list[6] < list[0] && list[0] < list[4] && list[3] < list[5] && list[5] < list[1])
			{
				cout << 1 << endl;
			}
			else if (list[6] == list[0] || list[4] == list[0] && list[3] <= list[5] && list[5] <= list[1])
			{
				cout << 2 << endl;

			}
			else if (list[1] == list[5] || list[3] == list[5] && list[6] <= list[0] && list[0] <= list[4])
			{
				cout << 2 << endl;
			}

		}
		else
			cout << 0 << endl;
	}

}
