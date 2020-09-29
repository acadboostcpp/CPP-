#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> &q) {
	stack<int> s;
	while(q.size() != 0) {
		s.push(q.front());
		q.pop();
	}
	while(s.size() != 0) {
		q.push(s.top());
		s.pop();
	}
}

int main() {
	queue<int> q;
	for(int i = 1; i <= 5; i++) {
		q.push(i);
	}
	reverse(q);
	while(q.size() != 0) {
		cout << q.front() << " ";
		q.pop(); 
	}
}