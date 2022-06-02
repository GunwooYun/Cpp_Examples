#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
	string name;
	int age;
public:
	Animal() {
		name = "";
		age = 0;
	}
	Animal(string name, int age) {
		this->name = name;
		this->age = age;
		cout << "Animal ����" << endl;
	}
	~Animal() {
		cout << "Animal �Ҹ�" << endl;
	}
	void setName(string name) {
		this->name = name;
	}
	void setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	friend void running(Animal* pAnimal);
	virtual void crying() = 0;
};

void running(Animal* pAnimal) {
	cout << pAnimal->name << "�� �޸���" << endl;
}

void crying(Animal* pAnimal) {
	pAnimal->crying();
}

class Dog : public Animal {
private:
	string bark;
public:
	Dog(string name="������", int age=1, string bark = "�۸�") :Animal(name, age) {
		this->bark = bark;
		cout << "Dog ����" << endl;
	}
	Dog(Dog& c) {
		this->setName(c.getName());
		this->setAge(c.getAge());
		this->bark = c.bark;
	}
	~Dog() {
		cout << "Dog �Ҹ�" << endl;
	}
	virtual void crying() {
		cout << getName() << "�� " << bark << endl;
	}
	string getBark() {
		return bark;
	}	
};

class Cat : public Animal {
private:
	string bark;
public:
	Cat(string name="�����", int age=1, string bark = "�߿�") :Animal(name, age) {
		this->bark = bark;
		cout << "Cat ����" << endl;
	}
	Cat(Cat& c) {
		this->setName(c.getName());
		this->setAge(c.getAge());
		this->bark = c.bark;
	}
	~Cat() {
		cout << "Cat �Ҹ�" << endl;
	}
	virtual void crying() {
		cout << getName() << "�� " << bark << endl;
	}
	string getBark() {
		return bark;
	}
};
int main() {
	cout << "-- �߻�Ŭ������ �Ļ� Ŭ���� ����--\n";
	Dog* dog = new Dog("������", 4, "�۸�");
	if (!dog) {
		cout << "�޸� �Ҵ� ����, dog = NULL" << endl;
		exit(1);
	}
	Cat* cat = new Cat("�����", 2, "�߿�");
	if (!cat) {
		cout << "�޸� �Ҵ� ����, dog = NULL" << endl;
		exit(1);
	}

	cout << "-- �Ű������� ������ ���� --\n";
	crying(dog);
	crying(cat);
	running(dog);
	running(cat);

	cout << "-- �⺻ ��������� ���� ���� --\n";
	Dog copyDog(*dog);
	cout << copyDog.getName() << endl;
	cout << copyDog.getAge() << endl;
	cout << copyDog.getBark() << endl;

	cout << "-- �Ҹ��� ���� --\n";
	delete dog;
	delete cat;

	return 0;

}