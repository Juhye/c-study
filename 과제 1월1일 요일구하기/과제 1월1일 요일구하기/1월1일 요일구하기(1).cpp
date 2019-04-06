#include <iostream>
using namespace std;
int isLeapY(int Y);
int day_calcu(int Y);

int main(void)
{
	int t;
	int Y;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cout <<"\n";
		cin >> Y;
		cout <<"\n";
		cout <<day_calcu(Y)<< "\n";
	}
}

int isLeapY(int Y) {
	if (Y % 400 == 0 || (Y % 4 == 0) && (Y % 100 != 0))
		return 366;
	else
		return 365;
}//윤년 평년 판별

int day_calcu(int Y) {
	int day = 0;
	for (int i = 0; i < Y; i++) {
		day = day + isLeapY(1582 + i);
	}
	return (day+6 )% 7 ;
}