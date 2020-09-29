#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int ele) {
	int ans = -1;
	int start = 0;
	int end = size - 1;
	while(start <= end) {
		int mid = (start + end) / 2;
		if(arr[mid] == ele) {
			ans = mid;
			break;
		}
		else if(arr[mid] > ele) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return ans;
}

int main() {
	// 			0	 1	 2 	 3	 4   5   6   7
	int arr[] = {12, 13, 14, 15, 16, 17, 89, 96};
	int ele;
	cout << "Enter the element to search: ";
	cin >> ele;
	int ans = BinarySearch(arr, 8, ele);
	cout << "Element found at pos: " << ans << endl;
}