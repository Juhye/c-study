#include<iostream>
#include<cstdio>
using namespace std;

int closestNumber(int n, int m);

int main(void)
{
	int t;
	int n, m;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		cout << closestNumber(n, m) << endl;
	}

	return 0;
}


int closestNumber(int n, int m) {
	int max_r=0;

	float float_r =(float) n / (float)m;
	int int_r = n / m;//소수부분 구하려고
	if (float_r > 0) {
		float r = float_r - int_r;

		if (r >= 0.5) {//절댓값이 가장큰수를  소수가 0.5보다 같거나크면 int n/m+1 출력 작으면 int n/m출력
			max_r = int_r+1;
			return (max_r * m);
		}
		if(r<0.5){
			max_r = int_r;
			return (max_r * m);
		}
	}
	else {
		float r = float_r - int_r + 1;
		if (r < 0.5) {
			max_r = n / m-1;
			return (max_r * m);
			
		}
		else {
			max_r = n / m;
			return (max_r*m);
			
		}
	}
}

