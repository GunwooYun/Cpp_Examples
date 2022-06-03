/* Page 286. Exam 6-3. Overloading */

#include <iostream>
#include <string>
using namespace std;

void star(int a = 5);
void msg(int id, string text = "");

void star(int a) {
	for (int i = 0; i < a; i++) cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}


int main() {
	star(); // start(5)
	star(10);

	msg(10); // msg(10, "")
	msg(10, "Hello");

	return 0;

}

/*
*****
**********
10
10 Hello
*/