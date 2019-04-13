#include<iostream>
using namespace std;
int main(){
	int n = 10;
	do {
		cout << n;
		n = n - 3;
	} while (n > 0);
	getchar();
}
/*while (n > 0) {
		cout << n;
		n = n - 3;
	}*/