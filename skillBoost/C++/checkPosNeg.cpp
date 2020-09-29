#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	if(n > 0) {
		cout << "Positive No" << endl;
	}
	else if(n == 0) {
		cout << "No is Zero" << endl;
	}
	else {
		cout << "Negative No" << endl;
	}
}