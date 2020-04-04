
#include "pch.h"
#include <iostream>
using namespace std;
class A {
private:
	int a;
public:
	A() { cout << "enter value" << endl;
	cin >> a;
	}
	friend class B;	 // Friend Class 
};

class B {
private:
	int b;
public:
	void showA(A& x) {
		// Since B is friend of A, it can access 
		// private members of A 
		cout << "the value of first object shown in friend class object is         " <<endl<<x.a;
	}
};

int main() {
	A a;
	B b;
	b.showA(a);
	return 0;
}

