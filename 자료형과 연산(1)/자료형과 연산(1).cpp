#include<iostream>
#include<climits>//형의 최대크기,최소크기를 알수있다
using namespace std;

int main() {
	short year = SHRT_MAX;
	int sale = INT_MAX;
	long total_sale = LONG_MAX;

	cout << "short형의 크기" << sizeof(short) << endl;
	cout << "int형의 크기" << sizeof(int) << endl;
	cout << "long형의 크기" << sizeof(long) << endl<<endl;
	cout << "short형의 최대" << year << endl<<endl;
	cout << "int형의 최대" <<sale<< endl<<endl;
	cout << "long형의 최대" << LONG_MAX << endl<<endl;

	getchar();
}