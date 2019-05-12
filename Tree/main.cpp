#include<iostream>
using namespace std;
#include "Tree.h"
#include<cstdlib>


int main() {
	Tree tree;
	tree.addData(37);
	tree.addData(14);
	tree.addData(65);
	tree.addData(47);
	tree.addData(1);
	tree.addData(8);
	tree.addData(5);
	tree.addData(21);

	tree.inorder();

	cout<<tree.search(47)->data;
	
	system("pause");
}