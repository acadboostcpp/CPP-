#include<iostream>
#include<stack>
using namespace std;

int priority(char ch) {
	switch(ch) {
		case '(':
		case ')': return 1;

		case '{':
		case '}': return 2;

		case '[':
		case ']': return 3;

		default: return 4;
	}
}

bool balanced(char str[]) {
	stack<char> st;
	st.push('\0');
	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
			st.push(str[i]);
		} else {
			if(priority(str[i]) == priority(st.top())) {
				st.pop();
			} else {
				return false;
			}
		}
	}
	if(st.top() == '\0') {
		return true;
	}
	return false;
}

int main() {
	char str[] = "[{[}}]";
	if(balanced(str)) {
		cout << "Balanced" << endl;
	} else {
		cout << "Not Balanced" << endl;
	}
}