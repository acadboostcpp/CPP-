#include<iostream>
using namespace std;

int fib(int n) {
	if(n <= 1) {
		return 1;
	}
	int smallAns = fib(n - 1) + fib(n - 2);
	return smallAns;
}

int main() {
	cout << fib(10) << endl;
}