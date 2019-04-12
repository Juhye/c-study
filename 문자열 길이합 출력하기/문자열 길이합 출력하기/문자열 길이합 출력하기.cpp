#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char a[20];
	char b[20];
	cout << "문자열 2개를 입력하세요" << endl;
	cin >> a >> b;

	cout << "문자열의 길이는" << strlen(a) + strlen(b);
	getchar();
}