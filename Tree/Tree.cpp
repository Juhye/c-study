#include "Tree.h"
#include<iostream>
using namespace std;


Node * Tree::createNode(int data)
{
	Node* node = new Node();
	node->data = data;
	node->left = nullptr;
	node->right = nullptr;
	return node;
}

Node * Tree::minValueNode(Node * root)
{
	/*Node* tmp = root;
	while (tmp->left != nullptr) {
		tmp = tmp->left;
	}
	return tmp;*/

	Node* tmp = root;
	if (tmp->left == nullptr) {
		return tmp;
	}

	minValueNode(tmp->left);
}

Tree::Tree()
{
	root = nullptr;
}


Tree::~Tree()
{
}

void Tree::addData(int data)
{
	if (root == nullptr) {
		root = createNode(data);
		return;
	}
	Node* tmp = root;
	Node* tmp_p = root;

	while (tmp != nullptr) {
		if (tmp->data > data) {
			tmp_p = tmp;
			tmp = tmp->left;
		}
		else if (tmp->data < data) {
			tmp_p = tmp;
			tmp = tmp->right;
		}
		else
			return;
	}

	if (tmp_p->data > data) {
		tmp_p->left = createNode(data);
	}
	else if (tmp_p->data < data) {
		tmp_p->right = createNode(data);
	}
	else
		return;
}

void Tree::deleteData(int data)
{
	Node* del = root;
	Node* del_p = root;

	if (del == nullptr)
		return;

	while (del->data != data) {
		if (del->data < data) {
			del_p = del;
			del = del->right;
		}
		else if (del->data > data) {
			del_p = del;
			del = del->left;
		}

		if (del == nullptr)
			return;
	}


	if (del_p->data < data) {
		if (del->left == nullptr) {
			del_p->right = del->right;
			delete del;
		}
		else {
			del_p->right = del->left;
			delete del;
		}
	}
	else if (del_p->data > data) {
		if (del->left == nullptr) {
			del_p->left = del->right;
			delete del;
		}
		else {
			del_p->left = del->left;
			delete del;
		}
	}

	if (del == nullptr)
		return;

}

void Tree::inorder(Node* root) {
	if (root != nullptr) {
		inorder(root->left);
		cout << root->data << endl;
		inorder(root->right);
	}
}

void Tree::inorder()
{
	inorder(root);
}

Node * Tree::search(int data)
{
	Node* tmp = root;

	if (tmp == nullptr)
		return nullptr;

	while (tmp->data != data) {
		if (tmp->data < data) {
			tmp = tmp->right;
		}
		else if (tmp->data > data) {
			tmp = tmp->left;
		}

		if (tmp == nullptr)
			return nullptr;
	}
	return tmp;
}
