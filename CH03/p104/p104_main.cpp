/* Page 104. Exam 3-1. class */
#include <iostream>
using namespace std;

class Circle {
private:
	int radius; // Declare variable
public:
	Circle(); // basic constructor
	Circle(int r); // 1 parameter constructor
	~Circle();
	double getArea(); // Declare method
	double getRadius();
};

//Circle::Circle() {
//	//Circle(1);
//	radius = 1;
//	//cout << "radius : " << radius << endl;
//}

Circle::~Circle() {
	cout << "소멸자 함수 실행 radius : " << radius << endl;
}

Circle::Circle():Circle(1){}

Circle::Circle(int r) {
	radius = r;
	cout << "radius : " << radius << endl;
}

double Circle::getArea() {
	return 3.14 * (double)radius * (double)radius; // 멤버변수는 매개변수로 안 넣고 바로 사용 가능
}

double Circle::getRadius() {
	return radius;
}

int main(void) {
	Circle donut; // Get instance
	cout << "test " << donut.getRadius() << endl;

	// Able to access variable and function, becase they are public
	//donut.radius = 1;
	double area = donut.getArea();

	cout << "donut area is " << area << endl;

	Circle* p;
	p = &donut;

	area = p->getArea();
	cout << "pointer donut area is " << area << endl;

	Circle pizza; // Get another instance

	//pizza.radius = 30;
	area = pizza.getArea();

	cout << "pizza area is " << area << endl;
	cout << "pizza size is " << sizeof(pizza) << endl;

	Circle one;
	area = one.getArea();
	cout << "one area is " << area << endl;

	Circle round(10);
	area = round.getArea();
	cout << "round area is " << area << endl;

	return 0;
}