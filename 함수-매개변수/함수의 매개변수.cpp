#include <iostream>
using namespace std;

int inc(int counter);
int main()
{
	int i;
	i = 10;
	cout << "함수 호출전 i=" << i << endl;
	cout << "함수 호출 i=" << inc(i) << endl;
	inc(i);
	cout << "함수 호출후 i=" << i << endl;

	getchar();
	return 0;
}
int inc(int counter)
{
	counter++;
	return counter;
}