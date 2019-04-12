#include<cstdio>
#include<iostream>
using namespace std;

int main() {
	int n = 12;
	while (n > 0) {
		n = n - 2;

		if (n == 6)
			continue;

		cout << n;
		getchar();
	}

}
