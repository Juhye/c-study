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
	cout << "정수를 입력하시오: ";
	cin >> n;
	return n;
}//입력받는 함수 따로
int factorial(int n)
{
	int i; long result = 1;
	for (i = 1; i <= n; i++)
		result *= i; 
	return result;
}