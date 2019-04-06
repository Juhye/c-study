#include <iostream>
using namespace std;
int lengthOfIntervalIntersection(int a, int b, int c, int d);
int max(int i, int j);
int min(int i, int j);


int main(void)
{
	int t;
	int h, m;
	int a, b, c, d;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b >> c >> d;
		cout << lengthOfIntervalIntersection(a, b, c, d) << endl;
	}
	return 0;
}
int lengthOfIntervalIntersection(int a, int b, int c, int d) {
	if (b<c||d<a)
		return -1;
	else
		return (min(b, d) - max(a, c));
}

int max(int i,int j) {
	if (i - j <= 0)
		return j;
	else
		return i;
}

int min(int i,int j){
	if (i - j <= 0)
		return i;
	else
		return j;
}
