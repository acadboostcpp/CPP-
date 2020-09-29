#include<iostream>
using namespace std;

long long helper(long long n, long long *arr) {
	if(n <= 1) {
		return 1;
	}
	if(arr[n]) {
		return arr[n];
	}
	long long a = helper(n - 1, arr);
	long long b = helper(n - 2, arr);
	arr[n] = (a + b);
	return arr[n];
}

long long fib(long long n) {
	long long *arr = new long long[n];
	for(long long i = 0; i < n; i++) {
		arr[i] = 0;
	}
	return helper(n, arr);
}

int main() {
	cout << fib(10) << endl;

	// Iterative
	int first = 1;
	int second = 1;
	int ans = 0;
	for(int i = 2; i <= 10; i++) {
		ans = first + second;
		first = second;
		second = ans;
	}
	cout << ans << endl;
}