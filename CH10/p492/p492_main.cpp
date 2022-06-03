/* Page 492. Exam 10-7. templete */
#include <iostream>
#include <string>

using namespace std;

template <class T>
class MyStack {
private:
	int top;
	T data[100];
public:
	MyStack();
	void push(T element);
	T pop();
};

/* ���ø� �Լ� ������ */
template <class T>
MyStack<T>::MyStack() {
	top = -1; // stack empty
}

template <class T>
void MyStack<T>::push(T element) {
	if (top == 99) {
		cout << "stack is full" << endl;
		return;
	}
	top++;
	data[top] = element;
}

template <class T>
T MyStack<T>::pop() {
	T retData;
	if (top == -1) {
		cout << "stack is empty" << endl;
		return 0;
	}
	retData = data[top--];
	return retData;
}

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	void show() { cout << '(' << x << ',' << y << ')' << endl; }
};

int main() {
	MyStack<int*> ipStack; // int* ���� ����
	int* p = new int[3];
	for (int i = 0; i < 3; i++) p[i] = i * 10; // 0, 10, 20���� �ʱ�ȭ
	ipStack.push(p); // ������ Ǫ��
	int* q = ipStack.pop(); // ������ ��
	for (int i = 0; i < 3; i++) cout << q[i] << ' '; // ȭ�� ���
	cout << endl;
	delete[] p;

	MyStack<Point> pointStack; // Point ��ü�� �����ϴ� ����
	Point a(2, 3), b;
	pointStack.push(a); // Point ��ü a Ǫ��. ����Ǿ� ���� 
	b = pointStack.pop(); // Point ��ü ��
	b.show(); // Point ��ü ���

	MyStack<Point*> pStack; // Point* �� �����ϴ� ����
	pStack.push(new Point(10, 20)); // ���� ���� Point ��ü Ǫ��. �����͸� ���� 
	Point* pPoint = pStack.pop(); // Point ��ü�� ������ ��
	pPoint->show(); // Point ��ü ���

	MyStack<string> stringStack; //  ���ڿ��� �����ϴ� ����
	string s = "c++";
	stringStack.push(s);
	stringStack.push("java");
	cout << stringStack.pop() << ' ';
	cout << stringStack.pop() << endl;
}

/*
0 10 20
(2,3)
(10,20)
java c++
*/