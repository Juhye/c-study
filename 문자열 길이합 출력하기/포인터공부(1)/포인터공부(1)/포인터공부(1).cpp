#include<iostream>
using namespace std;

void main() {
	int a = 10;
	int b = 20;
	int c = a + b;

	int *p_a = & a;//*p_a는 a의 포인터,a의 주소를 받아서 a값을 가져온다..제자리!
	int *p_b = &b;
	int *p_c = &c;

	cout << a << "\n" << b << "\n" << c << "\n" << *p_a << "\n" << *p_b << "\n" << *p_c << "\n";
	cout << &a << "\n" << &b << "\n" << &c << "\n";//a,b,c의 주소출력
	cout << p_a << "\n" << p_b << "\n" << p_c;// *를 떼서 값을 가져오지않고 &만 남아서 그냥 주소만 출력된다
	getchar();



}