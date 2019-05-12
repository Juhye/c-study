#include<iostream>
using namespace std;
const int t = 10;

int Arr(int arr[]);

int arr[t];
int main() {
	Arr(arr);
	for (int i = 0; i < 10; i++) {
		cout << arr[i];
	}
	getchar();
}

int Arr(int arr[]){
	for (int i = 0; i < t; i++) {
		arr[i]=i;
	}
	return 0;
}