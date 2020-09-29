#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class TreeNode {
public:
	int data;
	vector<TreeNode *> children;

	TreeNode(int data) {
		this->data = data;
	}
};


void PrintTree(TreeNode *root) {
	cout << root->data << ":";
	for(int i = 0; i < root->children.size(); i++) {
		cout << root->children[i]->data << " ";
	}
	cout << endl;
	for(int i = 0; i < root->children.size(); i++) {
		PrintTree(root->children[i]);
	}
}

int height(TreeNode *root) {
	if(root->children.size() == 0) {
		return 1;
	}

	vector<int> h;
	for(int i = 0; i < root->children.size(); i++) {
		int h1 = height(root->children[i]);
		h.push_back(h1);
	}

	sort(h.begin(), h.end());

	return (h.at(h.size() - 1) + 1);
}

void preOrder(TreeNode *root) {
	if(root == NULL) {
		return;
	}
	cout << root->data << " ";

	for(int i = 0; i < root->children.size(); i++) {
		preOrder(root->children[i]);
	}
}

void postOrder(TreeNode *root) {
	if(root == NULL) {
		return;
	}

	for(int i = 0; i < root->children.size(); i++) {
		postOrder(root->children[i]);
	}
	cout << root->data << " ";
}

int main() {
	TreeNode *root = new TreeNode(5);
	TreeNode *node1 = new TreeNode(4);
	TreeNode *node2 = new TreeNode(3);
	TreeNode *node3 = new TreeNode(2);
	TreeNode *node4 = new TreeNode(6);
	TreeNode *node5 = new TreeNode(7);

	root->children.push_back(node1);
	root->children.push_back(node2);
	root->children.push_back(node3);

	node1->children.push_back(node4);

	node4->children.push_back(node5);

	PrintTree(root);
	cout << "height: " << height(root) << endl;

	cout << "Preorder: " << endl;
	preOrder(root);
	cout << endl;
	cout << "postOrder: " << endl;
	postOrder(root);
	cout << endl;
}