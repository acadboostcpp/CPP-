#include<iostream>
using namespace std;
int main() {
	int arr[5];
	cout << "Enter the elements: ";
	for(int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	cout << "Our Array is: ";
	for(int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
}