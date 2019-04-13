#include <iostream>
using namespace std;

void main()
{
	int x, y, r;
	cout << "두개의 정수를 입력하시오(큰수, 작은수): ";
	cin >> x;
	cin >> y;
	getchar();
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	cout << "최대 공약수는 " << x << "입니다.\n";

	getchar();
}