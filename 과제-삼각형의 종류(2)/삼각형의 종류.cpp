#include <iostream>
#include<cmath>
using namespace std;

int decision(int coordinates[]);
int length[3];

int main()
{
	int t;
	int coordinates[6];
	cin >> t;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> coordinates[j];
		}
		cout << decision(coordinates) << endl;
	}
	return 0;
}

int makelength(int a, int b, int c, int d) {
	return ((c - a)*(c - a) + (d - b)*(d - b));
}

int decision(int coordinates[]) {
	length[0] = makelength(coordinates[0], coordinates[1], coordinates[2], coordinates[3]);
	length[1] = makelength(coordinates[2], coordinates[3], coordinates[4], coordinates[5]);
	length[2] = makelength(coordinates[4], coordinates[5], coordinates[0], coordinates[1]);

	for (int i = 0; i < 2; i++)
	{
		int least = i;
		for (int j = i + 1; j < 3; j++) {
			if (length[j] < length[least])
				least = j;
			int temp = length[i];
			length[i] = length[least];
			length[least] = temp;
		}
	}

	if ((long double)sqrt(length[2]) >= (long double)sqrt(length[1]) + (long double)sqrt(length[0]))
		return 0;
	else if (length[2] == length[1] + length[0])
		return 1;
	else if (length[2] > length[1] + length[0])
		return 2;
	else if (length[2] < length[1] + length[0])
		return 3;
}