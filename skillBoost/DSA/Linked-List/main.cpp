#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int data) {
		this->data = data;
		next = NULL;
	}
};

void print(Node *head) {
	while(head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

int lengthOfLL(Node *head) {
	int count = 0;
	while(head != NULL) {
		head = head->next;
		count++;
	}
	return count;
}

int main() {

	Node n1(12);
	Node *head = &n1;
	Node n2(14);
	n1.next = &n2;
	Node n3(19);
	n2.next = &n3;
	Node n4(18);
	n3.next = &n4;
	Node n5(10);
	n5.next = &n1;
	head = &n5;
	cout << "LL: ";
	print(head);
	cout << endl;
	cout << "Size of LL: " << lengthOfLL(head) << endl;
}