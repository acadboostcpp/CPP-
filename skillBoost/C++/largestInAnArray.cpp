#include<iostream>
using namespace std;
int main() {
	int arr[10];
	cout << "Enter the array elements: ";
	for(int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	int lar = arr[0];
	for(int i = 1; i < 10; i++) {
		if(lar < arr[i]) {
			lar = arr[i];
		}
	}
	cout << "Largest Element: " << lar << endl;
}