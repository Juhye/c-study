#include<iostream>
#include<climits>//���� �ִ�ũ��,�ּ�ũ�⸦ �˼��ִ�
using namespace std;

int main() {
	short year = SHRT_MAX;
	int sale = INT_MAX;
	long total_sale = LONG_MAX;

	cout << "short���� ũ��" << sizeof(short) << endl;
	cout << "int���� ũ��" << sizeof(int) << endl;
	cout << "long���� ũ��" << sizeof(long) << endl<<endl;
	cout << "short���� �ִ�" << year << endl<<endl;
	cout << "int���� �ִ�" <<sale<< endl<<endl;
	cout << "long���� �ִ�" << LONG_MAX << endl<<endl;

	getchar();
}