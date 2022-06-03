/* Page 302. Pic 6-12. static */

#include <iostream>
using namespace std;

int globalA = 10;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money = money;
	}

	static int sharedMoney;
	static void addShared(int m) {
		sharedMoney += m;
	}
};

/* static variable declare */
int Person::sharedMoney = 10;

int main()
{
	//Person::sharedMoney = 10;
	globalA = 100;
	Person::addShared(50);
	cout << Person::sharedMoney << endl;
	cout << globalA << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	cout << Person::sharedMoney << endl;

	Person::sharedMoney = 300;
	Person::addShared(100);

	cout << han.money << ' ' << Person::sharedMoney << endl;

	return 0;
}

/*
60
100
200
100 400
*/