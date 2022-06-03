/* Page 236. Pic 5-8. Swap using call by reference */

#include <iostream>

using namespace std;

/* Parameters are reference variable */
void swap(int& a, int& b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main(void) {

	int m = 2, n = 9;
	swap(m, n);
	cout << "m : " << m << " n : " << n << endl; // m : 9 n : 2

	return 0;
}

/*
m : 9 n : 2
*/