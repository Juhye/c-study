#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#include <cmath>
using namespace std;
int angleClock(int h, int m);
int main(void)
{
	int t;
	int h, m;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> h >> m;
		cout << angleClock(h, m) << endl;
	}
	return 0;
}
int angleClock(int h, int m)
{

	float h_angle = 0.5 * (h * 60 + m);
	float m_angle = 6 * m;


	float angle = abs(h_angle - m_angle);


	if (angle > 180)
	{
		angle = 360 - angle;
	}

	return (int)angle;
}