//기호상수=기호를 이용하여 상수를 표현한것
//good=가독성,값을 쉽게 변경가능
//const 키워드 사용!#define으로도 할수있다

#include <iostream>
using namespace std; // 이름공간설정
int main()
{
	const int MONTHS = 12;// 기호상수선언
	double m_salary, y_salary; // 변수선언
	cout << "월급을입력하시요: ";
	getchar();
	cin >> m_salary;
	y_salary = 12 * m_salary; // 순수입계산
	cout << "연봉은" << y_salary << "입니다" << endl;
	getchar();
}