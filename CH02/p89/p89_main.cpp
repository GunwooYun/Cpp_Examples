/* Page 89. Exam 2. multiple table */
#include <iostream>

using namespace std; // Define to use namespace std

int main(int argc, char* argv[]) {

	int a = 1;
	a = a << 1;
	a <<= 1;

	/* std: namespace
	*  cout : °´Ã¼, console out
	* */


	//std::cout << "Hello, world" << std::endl;
	//std::cout << a << "\n\n";
	//std::cout << "Hello" << std::endl << "nice to meet you" << std::endl;

	cout << "±¸±¸´Ü";
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++)
			cout << i << '*' << j << '=' << i * j << endl;
		cout << endl;
	}

	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++)
			cout << j << '*' << i << '=' << i * j << "\t";
		cout << endl;
	}

	return 0;
}