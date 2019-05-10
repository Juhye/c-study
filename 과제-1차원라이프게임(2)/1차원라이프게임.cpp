#include<iostream>
using namespace std;
#define BOARD_SIZE 51
void runlife(int a[], int numcell, int time);

int main() {
	int t,n,k;
	int a[BOARD_SIZE];
	cin >> t;
	cin >> n >> k;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		runlife(a, n, k);
		cout << endl;
	}
	return 0;
}

void runlife(int a[], int numcell, int time)
{
	int b[BOARD_SIZE];
	int i, j;
	while (time--) {
		for (i = 0; i < numcell; i++) {
			if (i == 0) {
				if (a[1] < 3) {
					if (a[i] > 0)
						b[i] = a[i] - 1;
					else if (a[i] <= 0)
						b[i] = 0;
				}
				else if (a[i + 1] > 7) {
					if (a[i] > 0)
						b[i] = a[i] - 1;
					else if (a[i] <= 0)
						b[i] = 0;
				}
				else if (a[i + 1] == 3) {
					b[i] = a[i];
				}
				else if ((a[i + 1] == 4) || (a[i + 1] == 5) || (a[i + 1] == 6) || (a[i + 1] == 7)) {
					if (a[i] < 9)
						b[i] = a[i] + 1;
					else if (a[i] == 9)
						b[i] = 9;
				}
			}
			else if (i == numcell - 1) {
				if (a[i - 1] < 3) {
					if (a[i] > 0)
						b[i] = a[i] - 1;
					else if (a[i] <= 0)
						b[i] = 0;
				}
				else if (a[i + 1] > 7) {
					if (a[i] > 0)
						b[i] = a[i] - 1;
					else if (a[i] <= 0)
						b[i] = 0;
				}
				else if (a[i + 1] == 3) {
					b[i] = a[i];
				}
				else if ((a[i + 1] == 4) || (a[i + 1] == 5) || (a[i + 1] == 6) || (a[i + 1] == 7)) {
					if (a[i] < 9)
						b[i] = a[i] + 1;
					else if (a[i] == 9)
						b[i] = 9;
				}
			}
			else
				if (a[i - 1] + a[i + 1] < 3) {
					if (a[i] > 0)
						b[i] = a[i] - 1;
					else if (a[i] <= 0)
						b[i] = 0;
				}
				else if (a[i - 1] + a[i + 1] > 7) {
					if (a[i] > 0)
						b[i] = a[i] - 1;
					else if (a[i] <= 0)
						b[i] = 0;
				}
				else if (a[i - 1] + a[i + 1] == 3) {
					b[i] = a[i];
				}
				else if ((a[i - 1] + a[i + 1] == 4) || (a[i - 1] + a[i + 1] == 5) || (a[i - 1] + a[i + 1] == 6) || (a[i - 1] + a[i + 1] == 7)) {
					if (a[i] < 9)
						b[i] = a[i] + 1;
					else if (a[i] == 9)
						b[i] = 9;
				}
		}
		for (j = 0; j < numcell; j++)
			a[j] = b[j];
	}
	for (i = 0; j < numcell; i++)
		cout << b[i] << " ";
}
