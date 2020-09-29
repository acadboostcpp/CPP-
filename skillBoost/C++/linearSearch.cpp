#include<iostream>
using namespace std;
int main() {
	// 			0	 1	 2 	 3	 4   5   6   7
	int arr[] = {12, 13, 14, 15, 16, 17, 89, 86};
	int ele;
	cout << "Enter the element to search: ";
	cin >> ele;
	int ans = -1;
	for(int i = 0; i < 8; i++) {
		if(arr[i] == ele) {
			ans = i;
			break;
		}
	}
	cout << "Element found at pos: " << ans << endl;
}