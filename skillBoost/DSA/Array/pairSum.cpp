#include<iostream>
using namespace std;

void pairSum(int arr[], int n, int sum) {
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(i == j) {
				continue;
			}
			else if(arr[i] + arr[j] == sum) {
				cout << arr[i] << " " << arr[j] << endl;
			}
		}
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

	pairSum(arr, 8, 7);
}