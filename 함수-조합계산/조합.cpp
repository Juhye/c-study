#include <iostream>
using namespace std;

int get_integer(void);
int combination(int n, int r);
int factorial(int n);
int main()
{
	int a, b;
	a = get_integer();
	b = get_integer();
	cout << "C(" << a << "," << b << ") = " << combination(a, b) << endl;
	getchar();
	return 0;
}
int combination(int n, int r)
{
	return (factorial(n) / (factorial(r) * factorial(n - r)));
}
int get_integer(void)
{
	int n;
	cout << "������ �Է��Ͻÿ�: ";
	cin >> n;
	return n;
}//�Է¹޴� �Լ� ����
int factorial(int n)
{
	int i; long result = 1;
	for (i = 1; i <= n; i++)
		result *= i; 
	return result;
}