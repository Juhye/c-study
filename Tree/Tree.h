#pragma once
struct Node {
	int data;
	Node* left;
	Node* right;
};

class Tree
{
	Node* root;
	Node* createNode(int data);
	void inorder(Node root);
	Node* minValueNode(Node* root);
public:
	Tree();
	~Tree();
	void addData(int data);
	void deleteData(int data);
	void inorder(Node * root);
	void inorder();
	Node* search(int data);


};//자료구조는 한가지의 일만!하게!!

