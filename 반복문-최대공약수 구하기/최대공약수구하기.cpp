#include <iostream>
using namespace std;

void main()
{
	int x, y, r;
	cout << "�ΰ��� ������ �Է��Ͻÿ�(ū��, ������): ";
	cin >> x;
	cin >> y;
	getchar();
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	cout << "�ִ� ������� " << x << "�Դϴ�.\n";

	getchar();
}