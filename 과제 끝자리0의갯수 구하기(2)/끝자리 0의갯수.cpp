#include <iostream>
using namespace std;
int count_sum2(int a);
int count_sum5(int a);
int compare(int n1, int n2);

int main(void)
{
	int array[100];
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int count2 = 0;
		int count5 = 0;
		for (int j = 0; j < n; j++) {
			cin >> array[j];
			count2 = count2 + count_sum2(array[j]);
			count5 = count5 + count_sum5(array[j]);
		}
		cout << compare(count2,count5) << endl;
	}
	return 0;
}

int count_sum2(int a) {
	int count2 = 0;
	while (a %2== 0) {
		a = a / 2;
		count2 = count2 + 1;
	}
	return count2;
}

int count_sum5(int a) {
	int count5 = 0;
	while (a % 5 == 0) {
		a = a / 5;
		count5 = count5 + 1;
	}
	return count5;
}

int compare(int n1, int n2) {
	if (n1 >= n2) {
		return n2;
	}
	else
		return n1;
}