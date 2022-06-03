/* Page 118. Exam 3-6. constructor */
#include <iostream>
using namespace std;

class Rectangle {
private:
	int width;
	int height;
public:
	Rectangle(); // default constructor
	Rectangle(int w, int h); // tow parameter constructor
	Rectangle(int w); // one parameter constructor
	bool isSquare();
};

/* default */
Rectangle::Rectangle():Rectangle(1) {
	//width = 1; height = 1;

	/* 필요시 코드 추가 가능 */
}

/* two parameters */
Rectangle::Rectangle(int w, int h):width(1),height(1) {
	//width = w; height = h;
}

/* one parameter */
Rectangle::Rectangle(int w):Rectangle(w, w) {
	//width = w; height = w;
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

/*
r1 is rectangler
r2 is rectangler
r3 is rectangler
*/