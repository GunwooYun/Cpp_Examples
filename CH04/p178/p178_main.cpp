/* Page 178. Exam 4-7. dynamic allocation, deallocation */

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

void circle_print(Circle* cp);

int main() {

	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);

	Circle* pArr = new Circle[3]{ Circle(10), Circle(20), Circle(30) };


	cout << "포인터 p의 area : " << p->getArea() << endl << "포인터 q의 area : " << q->getArea() << endl;

	for (int i = 0; i < 3; i++) {
		cout << "포인터 p" << i << "의 area : " << pArr[i].getArea() << endl;
	}

	delete p, q;
	delete[] pArr;

#if 0
	Circle circleArr[3]; // instance array
	Circle circleArr2[3] = { Circle(10), Circle(20), Circle(30) }; // 선언과 동시에 초기화

	// access array to set value
	circleArr[0].setRadius(10);
	circleArr[1].setRadius(20);
	circleArr[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << "Circle " << "의 면적은 " << circleArr[i].getArea() << " 입니다\n";
		cout << "Circle " << "의 면적은 " << circleArr2[i].getArea() << " 입니다\n";
	}
	circle_print(circleArr);

	/*
	Circle* p;
	p = circleArr;
	for (int i = 0; i < 3; i++) {
		//cout << "Circle " << "의 면적은 " << p[i].getArea() << " 입니다\n";
		cout << "Circle " << "의 면적은 " << p->getArea() << " 입니다\n";
		p++;
	}
	*/

#endif
	return 0;
}

void circle_print(Circle* cp) {
	for (int i = 0; i < 3; i++) {
		//cout << "Circle " << "의 면적은 " << p[i].getArea() << " 입니다\n";
		cout << "[circle_print]Circle " << "의 면적은 " << cp->getArea() << " 입니다\n";
		cp++;
	}
}

/*
포인터 p의 area : 3.14
포인터 q의 area : 2826
포인터 p0의 area : 314
포인터 p1의 area : 1256
포인터 p2의 area : 2826
*/