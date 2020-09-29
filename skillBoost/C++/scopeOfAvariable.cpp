#include<iostream>
using namespace std;
int main() {
	int i = 2;
	if(i > 1) {
		int j = 4;
		cout << "First " << j << endl;
		if(j > 3) {
			int k = 9;
			cout << "Second " << k << endl;
		}
	}
	cout << j << endl;
	cout << i << endl;
}