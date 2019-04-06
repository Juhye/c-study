#include <iostream>
using namespace std;
int zero_count();

int main(void)
{
	int array[100];
	int t,n;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < n; j++) {//배열에 t개를 받아서 넣을거야(동적할당?)
			cin >> array[i];
			cout << zero_count() << endl;
		}
	}
	return 0;
}
int zero_count() {
	int zerocount = 0;
	int count = 1;
	
	for (int i = 0; i<n; i++) {//배열에 있는 수를 모두 다 곱할건대 0이면(값입력이 안된 배열이면) 중단
		count = count * array[i];
	}
	
	for (; (count % 10) != 0; zerocount++) {
		if (count % 10 == 0) {
			count = count / 10;
		}//10으로 나누어 떨어지면 zerocount에한번에 1씩저장하구 그거 return할거야!
	}
	return zerocount;
}