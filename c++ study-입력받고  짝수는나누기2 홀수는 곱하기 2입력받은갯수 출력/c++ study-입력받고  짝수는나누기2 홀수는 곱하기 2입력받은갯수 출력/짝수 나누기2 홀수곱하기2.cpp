#include<iostream>
using namespace std;


int change(int k) {
	if (k % 2 == 0)//짝수라면
		k = k / 2;
	else if (k % 2 == 1)
		k = k * 2;
	return k;
}

int main() {
	int arr[100];
	int n=0;//입력받는 갯수

	for (int i = 0; i < 100; i++,n++) {
		cin >> arr[i];
		if (arr[i] == 0)
			break;
	}//입력받아서 배열에 저장할구야
	

	for (int i = 0; i < n; i++) {
		cout <<n<<"\n"<<change(arr[i])<<endl;
	}
}