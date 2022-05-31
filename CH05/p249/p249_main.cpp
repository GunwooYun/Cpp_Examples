/* Page 249. Exam 5-9. Shallow copy */
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c); // copy constructor ���������
	void setRadius(int r) { radius = r; }
	double getArea();
};

/* ��������ڰ� �Ʒ��� ���� ���� (�����ص� �����Ϸ� �ڵ� ����) */
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

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "�纻�� ���� = " << dst.getArea() << endl;

#if 0

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
#endif

	return 0;
}

void circle_print(Circle* cp) {
	for (int i = 0; i < 3; i++) {
		//cout << "Circle " << "�� ������ " << p[i].getArea() << " �Դϴ�\n";
		cout << "[circle_print]Circle " << "�� ������ " << cp->getArea() << " �Դϴ�\n";
		cp++;
	}
}