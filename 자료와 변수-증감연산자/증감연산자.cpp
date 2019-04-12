#include <stdio.h>
#include <iostream>

using namespace std;
void main(void)
{
	int x, y, nextx, nexty;
	x = 1;
	y = 1;
	nextx = ++x;// x의값이사용되기전에증가된다. nextx는2가된다.
	nexty = y++;// y의값이사용된후에증가된다. nexty는1이된다.
	cout << nextx << "\n" << nexty << endl;;

	bool num= -1;//0이 아니면 참이고 0이면 거짓으로 판단한다
	cout << num << endl<<(!0);
	getchar();
}