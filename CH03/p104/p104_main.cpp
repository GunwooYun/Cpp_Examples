#include <iostream>
using namespace std;

class Circle {
public:
	int radius; // Declare variable
	double getArea(); // Declare method
};

double Circle::getArea() {
	return 3.14 * radius * radius; // ��������� �Ű������� �� �ְ� �ٷ� ��� ����
}



int main(void) {
	Circle donut; // Get instance
	donut.radius = 1;

	double area = donut.getArea();

	cout << "donut area is " << area << endl;

	Circle pizza;
	pizza.radius = 30;

	area = pizza.getArea();

	cout << "pizza area is " << area << endl;

	return 0;
}