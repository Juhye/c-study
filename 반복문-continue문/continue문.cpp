#include<iostream>
using namespace std;

int main() {
	int i = 0,sum = 0;
	while (i < 100) {
		if (i % 2 == 1) {
			i++;
			continue;
		}
		sum += i;
		i++;
	}
	cout << "sum=" << sum << endl;
	getchar();
	return 0;
}