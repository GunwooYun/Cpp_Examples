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
	Power operator+ (Power& op2); // + oerator 함수 선언
	bool operator== (Power& op2); // == operator 함수 선언
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
	if (a == b) cout << "두 파워가 같다" << endl;
	else cout << "두 파워가 다르다" << endl;

	return 0;
}