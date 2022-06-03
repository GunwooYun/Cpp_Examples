/* Page 431. Exam 9-2. Virtual function */
#include <iostream>

using namespace std;

class Base {
public:
	virtual void f() {
		cout << "Base::f() called" << endl;
	}
};

class Derived :public Base {
public: 
	virtual void f() {
		cout << "Derived::f() called" << endl;
	}
};

int main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f();

	Base* pBase;
	pBase = pDer; // upcasting
	pBase->f();

	return 0;
}