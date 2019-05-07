#include<iostream>
using namespace std;

int main() {
	int number=0;
	switch (number)
	{
	case 0:
		cout << "없음\n";
	case 1:
		cout << "하나\n";
		break;
	case 2:
		cout << "둘\n";
			break;
	default:
		cout << "많음\n";
			break;
	}
	getchar();
}