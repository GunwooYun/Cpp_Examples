#include <iostream>
using namespace std;

int main()
{
	cout << "Enter width >>";

	int width;
	cin >> width;

	cout << "Enter height >>";
	int height;
	cin >> height;

	int area = width * height;
	cout << "area is " << area << endl;
	return 0;
}