#include<iostream>
using namespace std;

int unique(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i == j) {
				continue;
			}
			else if(arr[i] == arr[j]) {
				break;
			}
			else if(j == n - 1 && arr[j] != arr[i]) {
				return arr[i];
			}
		}
	}
	return -1;
} 

int main() {
	int arr[] = {1, 2, 3, 4, 4, 1, 2, 3};
	cout << unique(arr, 8) << endl;
}