/* Page 455. Exam 9-7. Virtual function */
#include <iostream>
using namespace std;

class Calculator {
	void intput() {
		cout << "정수 2개를 입력하세요>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0;
public:
	void run() {
		intput();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};

class Adder : public Calculator {
protected:
	int calc(int a, int b) {
		return a + b;
	}
};

class Subtractor : public Calculator {
protected:
	int calc(int a, int b) {
		return a - b;
	}
};

int main() {
	Adder adder;
	Subtractor subtractor;

	adder.run();
	subtractor.run();
}

/*
Circle::draw() called
*/