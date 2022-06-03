#ifndef _PRIVATEACCESSERROR_H_
#define _PRIVATEACCESSERROR_H_

class PrivateAccessError {
private:
	int a;
	//int c;
	//int d;
	//int a;
	//void f();
	//PrivateAccessError();

public:
	void setA(int a);
	int getA();
	//int a;
	int b;
	PrivateAccessError();
	PrivateAccessError(int x);
	void f();
	void g();
	//int getc();
};

#endif // !_PrivateAccessError_H_

