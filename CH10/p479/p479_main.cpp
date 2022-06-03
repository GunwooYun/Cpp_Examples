/* Page 479. Exam 10-1. Generic */
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) {
		this->radius = radius;
	}
	int getRadius() {
		return radius;
	}
};

/* 템플릿함수 */
template <class T>
void mySwap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 4, b = 5;
	mySwap(a, b); // 자동으로 T 데이터 타입 변환
	cout << "a=" << a << ", " << "b=" << b << endl;

	double c = 0.3, d = 12.5;
	mySwap(c, d);
	cout << "c=" << c << ", " << "d=" << d << endl;

	Circle donut(5), pizza(20);
	cout << "donut radius = " << donut.getRadius() << ", ";
	cout << "pizza radius = " << pizza.getRadius() << endl;
}

/*
a=5, b=4
c=12.5, d=0.3
donut radius = 5, pizza radius = 20
*/