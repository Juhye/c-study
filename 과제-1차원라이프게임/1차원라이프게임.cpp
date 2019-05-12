#include<iostream>
using namespace std;
void Copy(const int n, int  cell2[], int cell[]);
void lifegamenumber(int cell[], const int n);
void exe(int* cell, const int n, int k);
int cell[50];
int cell2[50];
int main() {
	int t;
	int n, k;
	cin >> t;
	cin >> n >> k;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < n; j++) {
			cin >> cell[j];
		}
		exe(cell, n, k);
		cout << endl;
	}
}

void exe(int* cell, const int n, int k) {
	for (int i = 0; i < k; i++) {
		lifegamenumber(cell, n);
	}

	for (int i = 0; i < n; i++) {
		cout << cell[i];
		if (i != n - 1)
			cout << " ";
	}
}

void Copy(const int n, int cell2[], int cell[])
{
	for (int i = 0; i < n; i++) {
		cell2[i] = cell[i];
	}
}

int def(int a, int b) {//a가 본배열 b는 이용하는값
	if (b < 3 && b >= 0) {
		a -= 1;
		if (a < 0)
			a = 0;
		return a;
	}
	if (b == 3) {
		return a;
	}
	if (b >= 4 && b <= 7) {
		a += 1;
		if (a > 9)
			a = 9;
		return a;
	}
	if (b == 8 && b == 9) {
		a -= 1;
		if (a < 0)
			a = 0;
		return a;
	}
}

void lifegamenumber(int cell[], const int n) {
	cell2[50] = { 0 };
	Copy(n, cell2, cell);


	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cell[0] = def(cell2[0], cell2[1]);

		if (i == n - 1)
			cell[n - 1] = def(cell2[n - 1], cell2[n - 2]);

		else
			cell[i] = def(cell2[i], cell2[i - 1] + cell2[i + 1]);
	}

}
