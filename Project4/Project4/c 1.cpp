#include<iostream>
#include<cstdio>
using namespace std;

int closestNumber(int n, int m);

int main(void)
{
	int t;
	int n, m;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		cout << closestNumber(n, m) << endl;
	}

	return 0;
}


int closestNumber(int n, int m) {
	int max_r=0;

	float float_r =(float) n / (float)m;
	int int_r = n / m;//�Ҽ��κ� ���Ϸ���
	if (float_r > 0) {
		float r = float_r - int_r;

		if (r >= 0.5) {//������ ����ū����  �Ҽ��� 0.5���� ���ų�ũ�� int n/m+1 ��� ������ int n/m���
			max_r = int_r+1;
			return (max_r * m);
		}
		if(r<0.5){
			max_r = int_r;
			return (max_r * m);
		}
	}
	else {
		float r = float_r - int_r + 1;
		if (r < 0.5) {
			max_r = n / m-1;
			return (max_r * m);
			
		}
		else {
			max_r = n / m;
			return (max_r*m);
			
		}
	}
}

