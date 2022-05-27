#include"PrivateAccessError.h"

/* Contructor */
PrivateAccessError::PrivateAccessError() {
	a = b = 1;
	//c = d = 1;
}

PrivateAccessError::PrivateAccessError(int x) :PrivateAccessError() {
	a = x;
	b = x;
}

/* Method */
void PrivateAccessError::f() {
	a = b = 5;
}

void PrivateAccessError::g() {
	a = b = 6;
}

void PrivateAccessError::setA(int a) {
	this->a = a;
}

int PrivateAccessError::getA() {
	return a;
}