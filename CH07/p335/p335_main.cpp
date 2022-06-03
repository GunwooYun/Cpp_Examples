/* Page 335. Exam 7-4. operator */
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
	Power operator+ (Power& op2); // + oerator �Լ� ����
	bool operator== (Power& op2); // == operator �Լ� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator+(Power& op2) {
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}

bool Power::operator==(Power& op2) {
	if (this->kick == op2.kick && this->punch == op2.punch) return true;
	else return false;
}

int main() {
	Power a(3, 3), b(3, 3), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
	if (a == b) cout << "�� �Ŀ��� ����" << endl;
	else cout << "�� �Ŀ��� �ٸ���" << endl;

	return 0;
}

/*
kick=3,punch=3
kick=3,punch=3
kick=6,punch=6
�� �Ŀ��� ����
*/