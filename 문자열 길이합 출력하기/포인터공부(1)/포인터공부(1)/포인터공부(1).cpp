#include<iostream>
using namespace std;

void main() {
	int a = 10;
	int b = 20;
	int c = a + b;

	int *p_a = & a;//*p_a�� a�� ������,a�� �ּҸ� �޾Ƽ� a���� �����´�..���ڸ�!
	int *p_b = &b;
	int *p_c = &c;

	cout << a << "\n" << b << "\n" << c << "\n" << *p_a << "\n" << *p_b << "\n" << *p_c << "\n";
	cout << &a << "\n" << &b << "\n" << &c << "\n";//a,b,c�� �ּ����
	cout << p_a << "\n" << p_b << "\n" << p_c;// *�� ���� ���� ���������ʰ� &�� ���Ƽ� �׳� �ּҸ� ��µȴ�
	getchar();



}