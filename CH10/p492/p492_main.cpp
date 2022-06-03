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

/* 템플릿 함수 구현부 */
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
	MyStack<int*> ipStack; // int* 저장 스택
	int* p = new int[3];
	for (int i = 0; i < 3; i++) p[i] = i * 10; // 0, 10, 20으로 초기화
	ipStack.push(p); // 포인터 푸시
	int* q = ipStack.pop(); // 포인터 팝
	for (int i = 0; i < 3; i++) cout << q[i] << ' '; // 화면 출력
	cout << endl;
	delete[] p;

	MyStack<Point> pointStack; // Point 객체만 저장하는 스택
	Point a(2, 3), b;
	pointStack.push(a); // Point 객체 a 푸시. 복사되어 저장 
	b = pointStack.pop(); // Point 객체 팝
	b.show(); // Point 객체 출력

	MyStack<Point*> pStack; // Point* 만 저장하는 스택
	pStack.push(new Point(10, 20)); // 동적 생성 Point 객체 푸시. 포인터만 저장 
	Point* pPoint = pStack.pop(); // Point 객체의 포인터 팝
	pPoint->show(); // Point 객체 출력

	MyStack<string> stringStack; //  문자열만 저장하는 스택
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