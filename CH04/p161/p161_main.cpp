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

	Circle circleArr[3]; // instance array
	Circle circleArr2[3] = { Circle(10), Circle(20), Circle(30) }; // ����� ���ÿ� �ʱ�ȭ

	// access array to set value
	circleArr[0].setRadius(10);
	circleArr[1].setRadius(20);
	circleArr[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << "Circle " << "�� ������ " << circleArr[i].getArea() << " �Դϴ�\n";
		cout << "Circle " << "�� ������ " << circleArr2[i].getArea() << " �Դϴ�\n";
	}
	circle_print(circleArr);

	/*
	Circle* p;
	p = circleArr;
	for (int i = 0; i < 3; i++) {
		//cout << "Circle " << "�� ������ " << p[i].getArea() << " �Դϴ�\n";
		cout << "Circle " << "�� ������ " << p->getArea() << " �Դϴ�\n";
		p++;
	}
	*/

	return 0;
}

void circle_print(Circle* cp) {
	for (int i = 0; i < 3; i++) {
		//cout << "Circle " << "�� ������ " << p[i].getArea() << " �Դϴ�\n";
		cout << "[circle_print]Circle " << "�� ������ " << cp->getArea() << " �Դϴ�\n";
		cp++;
	}
}