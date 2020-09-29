#include<iostream>
using namespace std;

class stack {

	int *data; 
	int lastIndex;
	int capacity;

public:

	stack(int totalSize) {
		data = new int[totalSize];
		lastIndex = 0;
		capacity = totalSize;
	}

	int size() {
		return lastIndex;
	}

	bool isEmpty() {
		if(lastIndex == capacity) {
			return true;
		}
		return false;
	}

	void push(int ele) {
		if(!(lastIndex == capacity)) {
			data[lastIndex] = ele;
			lastIndex++;
		}
		else {
			cout << "Stack is Full" << endl;
		}
	}

	int pop() {
		if(isEmpty()) {
			cout << "Stack is Empty" << endl;
			return -1;
		}
		else {
			int top = data[lastIndex - 1];
			lastIndex--;
			return top;
		}
	}

};

int main() {
	stack s1(5);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	cout << "size: " << s1.size() << endl;
	cout << "top: " << s1.pop() << endl;
	cout << "top: " << s1.pop() << endl;
	cout << "top: " << s1.pop() << endl;
	cout << "size: " << s1.size() << endl;
}