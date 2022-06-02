/* Page 304. Exam 6-11. static */
#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles; // created circles
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; }
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircles() { return numOfCircles; }

};

Circle::Circle(int r) {
	radius = r;
	numOfCircles++;
}

int Circle::numOfCircles = 0; // »ó¼Ó

int main() {
	Circle* p = new Circle[10];
	cout << "Alive circle numbers = " << Circle::getNumOfCircles() << endl;

	delete[] p;
	cout << "Alive circle numbers = " << Circle::getNumOfCircles() << endl;

	Circle a;
	cout << "Alive circle numbers = " << Circle::getNumOfCircles() << endl;

	Circle b;
	cout << "Alive circle numbers = " << Circle::getNumOfCircles() << endl;

	return 0;
}