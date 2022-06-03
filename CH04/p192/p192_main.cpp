/* Page 192. Exam 4-11. String class */

#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string str; // Declare string instance
	string address("����� ���ϱ� �Ｑ�� 389");
	string copyAddress(address); // copy string address to copyAddress

	char txt[] = { 'L', 'O', 'V', 'E', '\0' };
	string title(txt);

	// print string instance

	cout << str << endl; // NULL, show nothing
	cout << address << endl; // show string
	cout << copyAddress << endl; // show copied string
	cout << title << endl; // show string of array

	return 0;
}

/*
����� ���ϱ� �Ｑ�� 389
����� ���ϱ� �Ｑ�� 389
LOVE
*/