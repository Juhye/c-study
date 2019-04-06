#include<iostream>
using namespace std;

void outputpyramid(int n, int k);

int main(void) {
	int t;
	int n, k;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		outputpyramid(n,k);
		cout << "\n";
	}
	return 0;
}

void outputpyramid(int n, int k) {
	if (k == 1) {
		cout << k;
	}
	else {
		cout << k << "*";

		for (int i = 1; i < k; i++) {
			cout << k + n * i - i*(i + 1) / 2;

			if (i != k - 1)
				cout << "*";
		}
	}
}