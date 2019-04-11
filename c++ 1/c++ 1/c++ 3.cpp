#include<iostream>
using namespace std;

class Book {
public:
	int id;
	int price;
	const char* title;//값못바꾸게 하려고

};

int main(void) {
	Book b;
	b.id = 11;
	b.price = 27000;
	b.title = "오만과편견";

	cout << b.id << "" << b.price << "" << b.title << endl;

	Book books[100];
	getchar();
}