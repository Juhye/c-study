#include <iostream>
using namespace std;
int zero_count();

int main(void)
{
	int array[100];
	int t,n;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < n; j++) {//�迭�� t���� �޾Ƽ� �����ž�(�����Ҵ�?)
			cin >> array[i];
			cout << zero_count() << endl;
		}
	}
	return 0;
}
int zero_count() {
	int zerocount = 0;
	int count = 1;
	
	for (int i = 0; i<n; i++) {//�迭�� �ִ� ���� ��� �� ���ҰǴ� 0�̸�(���Է��� �ȵ� �迭�̸�) �ߴ�
		count = count * array[i];
	}
	
	for (; (count % 10) != 0; zerocount++) {
		if (count % 10 == 0) {
			count = count / 10;
		}//10���� ������ �������� zerocount���ѹ��� 1�������ϱ� �װ� return�Ұž�!
	}
	return zerocount;
}