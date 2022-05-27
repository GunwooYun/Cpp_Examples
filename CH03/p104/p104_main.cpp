#include <iostream>
using namespace std;

class Circle {
public:
	int radius; // Declare variable
	double getArea(); // Declare method
};

class _Circle {
	int radius; // Declare variable
public:	
	double getArea(); // Declare method
	void setRadius(int r);
};

double Circle::getArea() {
	return 3.14 * radius * radius; // 멤버변수는 매개변수로 안 넣고 바로 사용 가능
}

double _Circle::getArea() {
	return 3.14 * radius * radius; // 멤버변수는 매개변수로 안 넣고 바로 사용 가능
}

void _Circle::setRadius(int r) {
	radius = r;
}



int main(void) {
	Circle donut; // Get instance

	// Able to access variable and function, becase they are public
	donut.radius = 1;
	double area = donut.getArea();

	cout << "donut area is " << area << endl;

	Circle pizza; // Get another instance

	pizza.radius = 30;
	area = pizza.getArea();

	cout << "pizza area is " << area << endl;
	cout << "pizza size is " << sizeof(pizza) << endl;
	_Circle c1;
	c1.setRadius(10);
	cout << "c1 area is " << c1.getArea() << endl;

	return 0;
}