#include<iostream>
using namespace std;
int main() {
	int amount, rate, time;
	cout << "Enter Amount Rate and Time: ";
	cin >> amount >> rate >> time;
	int SI = (amount * rate * time) / 100;
	cout << "The SI is: " << SI << endl;
}