#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
	int arr[] = {2, 4, 2, 4, 3, 6, 3, 2};
	unordered_map<int, int> ourmap;
	for(int i = 0; i < 8; i++) {
		if(ourmap.count(arr[i]) > 0) {
			ourmap[arr[i]]++;
			continue;
		}
		ourmap[arr[i]] = 1;
	}

	for(auto it = ourmap.begin(); it != ourmap.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}

	ourmap.at(2);
}