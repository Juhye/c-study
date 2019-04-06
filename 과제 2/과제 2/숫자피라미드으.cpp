#include<iostream>
using namespace std;

void outputPyramid(int, int);

int main(void) {
	int t;
	int n, k;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		outputPyramid(n, k);
	}
	return0;
}

void outputPyramid(int n, int k) {
	int arr[][];
	int j = 1;
	for (int i = 1; i <= n; i++) {
		a[i][j] = a[i+1][j] + 1;
	}
	for (; j <= i; j++) {
		a[i][k+1] = a[i][k];
	}
}