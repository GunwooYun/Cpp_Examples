/* Page 280. Exam 6-1. Overloading */

#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {
	int res = a[0];
	for (int i = 1; i < size; i++) {
		if (res < a[i]) res = a[i];
	}
	return res;
}

int main() {

	int arr[6] = { 1, 9, -2, 8, 6 };
	cout << big(2, 3) << endl;
	cout << big(arr, 5) << endl;

	return 0;
}

/*
3
9
*/