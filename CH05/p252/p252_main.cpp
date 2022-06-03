/* Page 252. Exam 5-10. Error due to shallow copy */

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name); // constructor
	~Person(); // deconstructor
	Person(const Person& p);
	void changeName(const char* name);
	void show() {
		cout << id << ", " << name << endl;
	}
};

/* Constructor */
Person::Person(int id, const char* name) {
	this->id = id;
	//cout << id << endl;
	int len = strlen(name);
	this->name = new char[len + 1]; // allocate memory
	
	if (this->name == NULL) {
		cout << "failed to allocate memory of name" << endl;
		exit(1);
	}
	strcpy(this->name, name); // copy name
	//cout << this->name << endl;
}

Person::~Person() {
	cout << "delete isntance of " << name << endl;
	if (name) delete[] name; // If exist name, deallocate memory of name
}

/* Copy constructor */
Person::Person(const Person& p) {
	this->id = p.id;
	//this->name = p.name // Shallow copy
	int len = strlen(p.name);
	this->name = new char[len + 1];
	strcpy(this->name, p.name);
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) return; // cannot change if this name shoter
	strcpy(this->name, name);
}
int main()
{
	Person father(1, "Kitae"); // instance
	Person daughter(father); // instance copy, call copy constructor

	cout << "after making instance of daughter ----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "after changing daughter name to Grace ----" << endl;
	father.show();
	daughter.show();


	return 0;
}

/*
after making instance of daughter ----
1, Kitae
1, Kitae
after changing daughter name to Grace ----
1, Kitae
1, Grace
delete isntance of Grace
delete isntance of Kitae
*/