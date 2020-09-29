#include<iostream>
using namespace std;

void myName() {
	cout << "My name is skillBoost " << endl;
}

int calculation(int a, int b, int c) {
	return (a + b * c);
}

int main() {

	myName();
	myName();

	cout << calculation(2, 3, 4) << endl;
	cout << calculation(4, 5, 6) << endl;

}