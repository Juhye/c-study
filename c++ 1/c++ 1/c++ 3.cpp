#include<iostream>
using namespace std;

class Book {
public:
	int id;
	int price;
	const char* title;//�����ٲٰ� �Ϸ���

};

int main(void) {
	Book b;
	b.id = 11;
	b.price = 27000;
	b.title = "���������";

	cout << b.id << "" << b.price << "" << b.title << endl;

	Book books[100];
	getchar();
}