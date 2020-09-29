#include<iostream>
using namespace std;

class BinaryTreeNode {
public:
	int data;
	BinaryTreeNode *left;
	BinaryTreeNode *right;

	BinaryTreeNode(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}

	~BinaryTreeNode() {
		delete left;
		delete right;
	}
};

int main() {
	BinaryTreeNode *root = new BinaryTreeNode(1);
	BinaryTreeNode *node1 = new BinaryTreeNode(2);
	BinaryTreeNode *node2 = new BinaryTreeNode(3);

	root->left = node1;
	root->right = node2;
}

