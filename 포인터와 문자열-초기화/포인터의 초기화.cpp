#include<iostream>
using namespace std;

void main() {
	int a=0;
	int *p_a = &a;
	int *p_b = nullptr;//얘는 출력불가
	cout << a << "\n" << *p_a ;
	getchar();
}