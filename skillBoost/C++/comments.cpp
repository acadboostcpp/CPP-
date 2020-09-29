#include<iostream>
using namespace std;

int ternary() {
	return (2 > 4) ? 1 : 0;
}

int main() {
	// this is a single line comment

	cout << "Hello World" << endl;

	if(ternary()) {
		cout << "good" << endl;
	} else {
		cout << "not good" << endl;
	}

	do {
		cout << "inside loop" << endl;
	}while(1 > 4);
 
}