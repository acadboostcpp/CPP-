#include<iostream>
#include<cstring>
using namespace std;

int lenOfString(char arr[]) {
	int count = 0;
	while(arr[count] != '\0') {
		count++;
	}
	return count;
}

void reverseString(char str[]) {
	int len = lenOfString(str);
	int begin = 0;
	int end = len - 1;
	while(begin < end) {
		char temp = str[begin];
		str[begin] = str[end];
		str[end] = temp;
		begin++;
		end--;
	}
}

int main() {
	int arr1[] = {1, 2, 3};

	char arr[] = "Hello";

	cout << "Int: " << arr1 << endl;
	cout << "String: " << arr << endl;

	cout << "Length: " << lenOfString(arr) << endl;

	char str[20];
	cout << "Enter your name: ";
	cin.getline(str, 20);
	cout << "Hello: " << str << endl;
	reverseString(str);
	cout << "Hello: " << str << endl;

	cout << strlen("abcd") << endl;
}