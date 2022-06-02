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

// 상속
class ColorPoint :public Point {
private:
	string color;
public:
	void setColor(string color) {
		this->color = color;
	}
	void showColorPoint();
	void showColor() {
		cout << color << endl;
	}

};
void ColorPoint::showColorPoint() {
	cout << color << ':';
	showPoint();
}

class GrayPoint :public Point {
private:
	string color;
	string color1;
public:
	void setColor(string color) {
		this->color = color;
	}
	void showGrayPoint();
	void showColor() {
		cout << color << endl;
	}
};

void GrayPoint::showGrayPoint() {
	cout << color << ':';
	showPoint();
}

void testShow(Point* p) {
	//cout << typeid(*p).name() << endl;
	//cout << typeid(ColorPoint).name() << endl;
	if (typeid(*p) == typeid(ColorPoint)) {
		cout << "test1" << endl;
		ColorPoint* cp = (ColorPoint*)p;
		cp->showColorPoint();
	}
	else if (typeid(*p) == typeid(GrayPoint)) {
		cout << "test2" << endl;
		GrayPoint* gp = (GrayPoint*)p;
		gp->showGrayPoint();
	}
	
}

int main()
{
	//cout << typeid(ColorPoint).name() << endl;
	// 파생클래스, Point 클래스를 상속
	ColorPoint cp;
	GrayPoint gp;

	cp.set(3, 4);
	cp.setColor("red");

	gp.set(5, 3);
	gp.setColor("gray");
	
	Point* pcp = dynamic_cast<Point*>(&cp);
	Point* pgp = dynamic_cast<Point*>(&gp);
	//cout << typeid(*pcp).name() << endl;
	//Point* pgp = gp;


	//testShow(cp);
	//testShow(gp);
	testShow(pcp);
	testShow(pgp);

#if 0

	Point* p = new Point; // 객체 동적 할당 (heap 할당)
	ColorPoint* cp = new ColorPoint;

	ColorPoint cp;
	ColorPoint* pDer = &cp;
	Point* pBase = pDer; // upcasting

	pDer->set(10, 20);
	pBase->showPoint();
	//pDer->showPoint();
#endif

#if 0
	Point p(3,3);
	p.showPoint();
	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("red");
	cp.showColorPoint();
	return 0;
#endif
}