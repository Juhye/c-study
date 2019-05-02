#include <iostream>
using namespace std;
int main()
{
	char *pc;
	int *pi;
	double *pd;
	pc = (char *)10000;
	pi = (int *)10000;
	pd = (double *)10000;
	cout << "증가 전 pc = " << (void*)pc << " pi = " << pi << " pd = " << pd << endl;
	pc++;
	pi++;
	pd++;
	cout << "증가 후 pc = " << (void *)pc << " pi = " << pi << " pd = " << pd << endl;
	return 0;
}
//포인터는 반드시 초기화 해주고 값이없으면 NULL포인터로 초기화 해줘야한다