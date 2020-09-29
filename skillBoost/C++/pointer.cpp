#include<iostream>
using namespace std;

void print(int *p) {
	cout << "a: " << *p << endl;
}

void increment(int &i) {
	i = i + 1;
	cout << "local i: " << i << endl;
}

int main() {
	int a = 10;

	cout << &a << endl;

	int *ptr = &a;

	cout << ptr << endl;

	cout << "a: " << *ptr << endl;

	print(ptr);


	// Reference

	int i = 12;
	int &j = i;
	cout << i << endl;
	cout << j << endl;

	increment(i);
	cout << "i: " << i << endl; 

	int *z = new int;
	*z = 20;
	cout << *z << endl;
	delete z;
	cout << *z << endl;
}