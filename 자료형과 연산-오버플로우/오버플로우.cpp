#include<iostream>
#include<climits>
using namespace std;
int main() {
	short s_money = SHRT_MAX;
	unsigned short u_money = USHRT_MAX;

	cout << ++s_money << endl;
	cout << ++u_money << endl;
	getchar();
	return 0;
}//최대에다가 1더해줘서 오버플로우 발생.처음꺼 출력한다