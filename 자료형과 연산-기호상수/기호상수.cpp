//��ȣ���=��ȣ�� �̿��Ͽ� ����� ǥ���Ѱ�
//good=������,���� ���� ���氡��
//const Ű���� ���!#define���ε� �Ҽ��ִ�

#include <iostream>
using namespace std; // �̸���������
int main()
{
	const int MONTHS = 12;// ��ȣ�������
	double m_salary, y_salary; // ��������
	cout << "�������Է��Ͻÿ�: ";
	getchar();
	cin >> m_salary;
	y_salary = 12 * m_salary; // �����԰��
	cout << "������" << y_salary << "�Դϴ�" << endl;
	getchar();
}