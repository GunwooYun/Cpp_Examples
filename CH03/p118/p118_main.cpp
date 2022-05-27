#include <iostream>
using namespace std;

class Rectangle {
private:
	int width;
	int height;
public:
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int w);
	bool isSquare();
};

Rectangle::Rectangle() {
	width = 1;
	height = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int w) {
	width = w; height = w;
}

bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main()
{

	Rectangle r1;
	Rectangle r2(3,5);
	Rectangle r3(3);

	if (r1.isSquare()) cout << "r1 is rectangler" << endl;
	if (r2.isSquare()) cout << "r2 is rectangler" << endl;
	if (r3.isSquare()) cout << "r3 is rectangler" << endl;
	return 0;
}