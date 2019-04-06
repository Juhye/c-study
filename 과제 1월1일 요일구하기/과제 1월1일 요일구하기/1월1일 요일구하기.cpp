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
		cin >> Y;
		cout << day_calcu(Y)<<"\n";
	}
}

int isLeapY(int Y) {
	if (Y % 400 == 0 || (Y % 4 == 0) && (Y % 100 != 0))
		return 366;
	else
		return 365;
}

int day_calcu(int Y) {
	int day = 0;
	for (int i = 0; i < Y-1582; i++) {
		day = day + isLeapY(1582+i);//1582³â ±âÁØ!
	}
	return (day+)% 7 ;
}