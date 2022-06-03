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

int main() {
	MyStack<int> iStack; // int �����ϴ� ���� ����
	iStack.push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack; // double �����ϴ� ���� ����
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char>* p = new MyStack<char>(); // char �����ϴ� ���� �����Ҵ�
	p->push('a');
	cout << p->pop() << endl;
	delete p; // �޸� ����
}