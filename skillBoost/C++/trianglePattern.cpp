#include<iostream>
using namespace std;
int main() {
	int j = 1;
	while(j <= 5) {
		int i = 1;
		while(i <= j) {
			cout << "*";
			i++;
		}
		j++;
		cout << endl;
	}
}