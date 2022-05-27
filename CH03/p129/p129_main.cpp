#include <iostream>
#include "PrivateAccessError.h"
using namespace std;




int main() {
	PrivateAccessError objA;
	PrivateAccessError objB(100);
	//cout << objB.getA() << " " << objB.getc() << endl;
	objB.setA(10);
	objB.b = 20;
	objB.f();
	objB.g();

	return 0;
}