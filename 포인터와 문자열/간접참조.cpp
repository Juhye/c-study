#include <iostream>
using namespace std;
//���� ���� ������ *: �����Ͱ� ����Ű�� ���� �������� ������
int main()
{
	char c = 'A'; // ������ ���� ����
	int i = 10000; // ������ ���� ����
	double d = 6.78; // �Ǽ��� ���� ����

	char *pc = &c; // ������ ������ ���� �� �ʱ�ȭ
	int *pi = &i; // ������ ������ ���� �� �ʱ�ȭ
	double *pd = &d; // �Ǽ��� ������ ���� �� �ʱ�ȭ
	cout << &pc << endl;

	(*pc)++; // ���� ������ 1 ����
	*pi = *pi + 1; // ���� ������ 1 ����
	*pd += 1; // ���� ������ 1 ����

	cout << c << endl;
	cout << *(&c) << endl;
	cout << (void*)pc << endl;
	cout << i << endl;
	cout << d << endl;
	getchar();
	return 0;
}