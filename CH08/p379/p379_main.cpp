#include <iostream>
#include <string>
using namespace std;

class Point {
private:
	int x, y;
public:
	/* default constructor */
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	void set(int x, int y) {
		this->x = x; this->y = y;
	}
	void showPoint() {
		cout << '(' << x << ',' << y << ')' << endl;
	}
};

class ColorPoint :public Point {
private:
	string color;
public:
	void setColor(string color) {
		this->color = color;
	}
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ':';
	showPoint();
}

int main()
{
	Point p(3,3);
	p.showPoint();
	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("red");
	cp.showColorPoint();
	return 0;
}