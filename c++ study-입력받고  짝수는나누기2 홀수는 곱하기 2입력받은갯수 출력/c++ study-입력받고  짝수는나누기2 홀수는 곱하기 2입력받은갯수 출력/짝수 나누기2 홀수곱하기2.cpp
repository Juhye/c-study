#include<iostream>
using namespace std;


int change(int k) {
	if (k % 2 == 0)//¦�����
		k = k / 2;
	else if (k % 2 == 1)
		k = k * 2;
	return k;
}

int main() {
	int arr[100];
	int n=0;//�Է¹޴� ����

	for (int i = 0; i < 100; i++,n++) {
		cin >> arr[i];
		if (arr[i] == 0)
			break;
	}//�Է¹޾Ƽ� �迭�� �����ұ���
	

	for (int i = 0; i < n; i++) {
		cout <<n<<"\n"<<change(arr[i])<<endl;
	}
}