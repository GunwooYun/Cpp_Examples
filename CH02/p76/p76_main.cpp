/* Page 76. Exam 2-7. string class */
#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song << " is sung by ";
	cout << "(hint : first character is " << elvis[0] << ")? ";

	getline(cin, singer); // cin 입력받아서 singer 에 저장
	//cout << "input answer : " << singer;

	cout << "\n\n";

	if (singer == elvis) // strcmp함수 안쓰고 바로 비교 가능
		cout << "Correct" << endl;
	else
		cout << "Wrong. The answer is " << elvis << endl;
	return 0;
}