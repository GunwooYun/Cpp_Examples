#include <iostream>
using namespace std;

class Rectangle {
public:
	double width;
	double height;
	double getArea();
};

double Rectangle::getArea() {
	return width * height;
}


int main(void) {

	Rectangle rect;
	rect.width = 3;
	rect.height = 5;

	cout << "Rectangle area is " << rect.getArea() << endl;


	return 0;
}