/* Page 358. Exam 7-14. return reference */
#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator << (int n); // ���� �� Power ��ü�� ���� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator <<(int n) {
	kick += n;
	punch += n;
	return *this; // �� ��ü�� ���� ����
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6; // ��ü a�� 3,5,6�̼������ ��������.
	a.show();
}

/*
kick=15,punch=16
*/