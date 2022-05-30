#include <iostream>
using namespace std;

int main()
{
	cout << "Enter number of integer? ";
	int n;
	cin >> n; // save n

	if (n <= 0) return 0;

	int* p = new int[n]; // allocate array n

	int* p1 = &p[0];
	int* p2 = &p[1];
	
	/* Exception handling */
	if (!p) {
		cout << "Failed to allocate to memory";
		return 0;
	}

	/* get value of integer */
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " of integer : ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];

	cout << "Average : " << sum / n << endl;

	delete[] p; // deallocate memory of p

	return 0;
}