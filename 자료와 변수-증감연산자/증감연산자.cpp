#include <stdio.h>
#include <iostream>

using namespace std;
void main(void)
{
	int x, y, nextx, nexty;
	x = 1;
	y = 1;
	nextx = ++x;// x�ǰ��̻��Ǳ����������ȴ�. nextx��2���ȴ�.
	nexty = y++;// y�ǰ��̻����Ŀ������ȴ�. nexty��1�̵ȴ�.
	cout << nextx << "\n" << nexty << endl;;

	bool num= -1;//0�� �ƴϸ� ���̰� 0�̸� �������� �Ǵ��Ѵ�
	cout << num << endl<<(!0);
	getchar();
}