/* Page 224. Exam 5-1. Call by Value */

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(); // default
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "积己磊 角青 radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "积己磊 角青 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "家戈磊 角青 radius = " << radius << endl;
}

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main(void) {

	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;

	return 0;
}

/*
积己磊 角青 radius = 30
家戈磊 角青 radius = 31
30
家戈磊 角青 radius = 30
*/