//숫자를 적으면 컴파일러가 가장 작은 자료형을 자동으로 선택
#include <iostream>
using namespace std; // 이름공간설정
int main()
{
	int x = 10; // 10은10진수이고 int형이고 값은 십진수로 10이다.
	int y = 010; // 010은8진수이고 int형이고 값은 십진수로 8이다.
	int z = 0x10; // 010은16진수이고 int형이고 값은 십진수로 16이다.
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	getchar();
	return 0;
}