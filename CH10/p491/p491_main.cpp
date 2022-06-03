/* Page 491. Exam 10-6. templete */
#include <iostream>
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

int main() {
	MyStack<int> iStack; // int 저장하는 스택 생성
	iStack.push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack; // double 저장하는 스택 생성
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char>* p = new MyStack<char>(); // char 저장하는 스택 동적할당
	p->push('a');
	cout << p->pop() << endl;
	delete p; // 메모리 해제
}