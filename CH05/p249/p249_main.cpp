/* Page 249. Exam 5-9. Shallow copy */
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c); // copy constructor 복사생성자
	void setRadius(int r) { radius = r; }
	double getArea();
};

/* 복사생성자가 아래와 같이 생성 (생략해도 컴파일러 자동 생성) */
Circle::Circle(const Circle& c) {
	this->radius = c.radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

void circle_print(Circle* cp);

int main() {

	Circle src(30);
	Circle dst(src);

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dst.getArea() << endl;

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