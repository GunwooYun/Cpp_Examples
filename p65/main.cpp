#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter width >> ";

	int width;
	cin >> width;

	cout << "Enter height >> ";
	int height;
	cin >> height;

	cout << "String test >> ";
	string str;
	cin >> str;



	int area = width * height;
	cout << "area is " << area << endl;
	cout << str;
	return 0;
}