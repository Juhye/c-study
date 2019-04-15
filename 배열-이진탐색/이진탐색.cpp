#include<iostream>
using namespace std;
int binary_search(int list[], int n, int key)
{
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high) { // ���� ���ڵ��� ����������
		middle = (low + high) / 2; // �߰� ��� ����
		if (key == list[middle]) // ��ġ�ϸ� Ž�� ����
			return middle;
		else if (key > list[middle])// �߰� ���Һ��� ũ�ٸ�
			low = middle + 1; // ���ο� ������ low ����
		else
			high = middle - 1; // ���ο� ������ high ����
	}
	return -1;
}