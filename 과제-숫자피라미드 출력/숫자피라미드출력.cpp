#include<iostream>
using namespace std;

void outputpyramid(int k);

int main(void) {
	int t;
	int n, k;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> k;
		outputpyramid(k);
		cout << "\n";
	}
	return 0;
}

void outputpyramid(int k) {
	if (k == 1) {
		cout << k;
	}

	else
	{
		for (int i = 1; i <= k; i++) {
			for (int j = 1; j <= i; j++) {
				cout << i-(j-1)*(j)/2+k*(j-1);
				if (j != i)
					cout << " ";
			}
			if(i!=k)
				cout << endl;
		}
	}
}