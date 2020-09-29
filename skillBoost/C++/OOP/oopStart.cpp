#include<iostream>
using namespace std;

class Student {
public:
	int id;
	int weight;

	Student() {
		cout << "A object is created" << endl;
	}

	Student(int i, int w) {
		cout << "Parameterised constructor is called" << endl;
		this -> id = i;
		this -> weight = w;
	}

	~Student() {
		cout << "A object is destroyed" << endl;
	}

	void print() {
		cout << "Hello There this is a function" << endl;
		cout << "ID: " << this -> id << endl;
		cout << "Weight: " << this -> weight << endl;
	}
};

int main() {
	Student s1(101, 49), s2;
	// s1.id = 101;
	// s1.weight = 65;
	// s2.id = 104;
	// s2.weight = 75;
	s1.print();
	// s2.print();
}