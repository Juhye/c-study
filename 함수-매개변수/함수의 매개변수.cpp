#include <iostream>
using namespace std;

int inc(int counter);
int main()
{
	int i;
	i = 10;
	cout << "�Լ� ȣ���� i=" << i << endl;
	cout << "�Լ� ȣ�� i=" << inc(i) << endl;
	inc(i);
	cout << "�Լ� ȣ���� i=" << i << endl;

	getchar();
	return 0;
}
int inc(int counter)
{
	counter++;
	return counter;
}