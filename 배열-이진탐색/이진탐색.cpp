#include<iostream>
using namespace std;
int binary_search(int list[], int n, int key)
{
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high) { // 아직 숫자들이 남아있으면
		middle = (low + high) / 2; // 중간 요소 결정
		if (key == list[middle]) // 일치하면 탐색 성공
			return middle;
		else if (key > list[middle])// 중간 원소보다 크다면
			low = middle + 1; // 새로운 값으로 low 설정
		else
			high = middle - 1; // 새로운 값으로 high 설정
	}
	return -1;
}