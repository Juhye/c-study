#include<iostream>
using namespace std;

void outputzigzag(int n, int k);

int main() {
	int t;
	int n, k;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		outputzigzag(n, k);
		getchar();
	}
	return 0;
}

void outputzigzag(int n, int k){
	int counter = k;
	if (k % 2 == 0) {
		int j = k / 2;
		for (int i = 0; i < k; i++) {
			cout << (2 * j*j + j) - i;
			counter--;
			if (counter != 0) {
				cout << "*";
			}
		}
		cout << "\n";
	}
	else {
		int j = (k+1) / 2;
		for (int i = 0; i < k; i++) {
			cout << (2 * j*j -3*j+2) + i;
			counter--;
			if (counter != 0) {
				cout << "*";
			}
		}
		cout << "\n";
	}

}
