#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter your name >> ";
    char name[20];
    cin >> name;

    cout << "Your name : " << name;

    #if 0
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