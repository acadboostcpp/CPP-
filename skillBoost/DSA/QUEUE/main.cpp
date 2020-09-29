#include<iostream>
using namespace std;

class queue {

	int *data;
	int totalSize;
	int capacity;
	int firstIndex;
	int lastIndex;

public:

	queue(int s) {
		data = new int[s];
		totalSize = 0;
		lastIndex = 0;
		firstIndex = -1;
		capacity = s;
	}

	int size() {
		return totalSize;
	}

	bool isEmpty() {
		return (totalSize == 0);
	}

	void enqueue(int ele) {
		if(totalSize == capacity) {
			cout << "Queue is full" << endl;
			return;
		}
		data[lastIndex] = ele;
		lastIndex = (lastIndex + 1) % capacity;
		if(firstIndex == -1) {
			firstIndex = 0;
		}
		totalSize++;
	}

	// int dequeue() {
	// 	// check is empty or not

	// 	// ans = data[firstIndex]
	// 	// firstIndex = firstIndex 
	// 	// size

	// 	// retturn ans
	// }

};


int main() {
	queue q1(5);
	q1.enqueue(2);
	q1.enqueue(3);
	cout << "size : " << q1.size() << endl;
	q1.enqueue(4);
	cout << "suze: " << q1.size() << endl;
}
