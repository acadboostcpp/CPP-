#include<iostream>
using namespace std;

int sumOfArrayElements(int arr[], int size) {
	if(size == 1) {
		return arr[0];
	}
	int smallAns = sumOfArrayElements(arr + 1, size - 1);
	return (arr[0] + smallAns);
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	cout << sumOfArrayElements(arr, 5) << endl;
}