#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter address >> ";
	char addr[100];
	cin.getline(addr, 100, '*');

	cout << "Your address is " << addr;

#if 0
	char name[20];
	cout << "Enter your name >> ";
	cin >> name;

	cout << "Your name is " << name << endl;


	int width;
	int height;
	double dw;
	double dh;


	cout << "Enter width & height >> ";

	cin >> dw >> dh;


	double area = dw * dh;
	cout << "area is " << area << endl;

#endif

	return 0;
}