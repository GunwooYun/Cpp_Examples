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
		cout << "Animal 생성" << endl;
	}
	~Animal() {
		cout << "Animal 소멸" << endl;
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
	cout << pAnimal->name << "가 달린다" << endl;
}

void crying(Animal* pAnimal) {
	pAnimal->crying();
}

class Dog : public Animal {
private:
	string bark;
public:
	Dog(string name="강아지", int age=1, string bark = "멍멍") :Animal(name, age) {
		this->bark = bark;
		cout << "Dog 생성" << endl;
	}
	Dog(Dog& c) {
		this->setName(c.getName());
		this->setAge(c.getAge());
		this->bark = c.bark;
	}
	~Dog() {
		cout << "Dog 소멸" << endl;
	}
	virtual void crying() {
		cout << getName() << "는 " << bark << endl;
	}
	string getBark() {
		return bark;
	}	
};

class Cat : public Animal {
private:
	string bark;
public:
	Cat(string name="고양이", int age=1, string bark = "야옹") :Animal(name, age) {
		this->bark = bark;
		cout << "Cat 생성" << endl;
	}
	Cat(Cat& c) {
		this->setName(c.getName());
		this->setAge(c.getAge());
		this->bark = c.bark;
	}
	~Cat() {
		cout << "Cat 소멸" << endl;
	}
	virtual void crying() {
		cout << getName() << "는 " << bark << endl;
	}
	string getBark() {
		return bark;
	}
};
int main() {
	cout << "-- 추상클래스와 파생 클래스 구현--\n";
	Dog* dog = new Dog("강아지", 4, "멍멍");
	if (!dog) {
		cout << "메모리 할당 실패, dog = NULL" << endl;
		exit(1);
	}
	Cat* cat = new Cat("고양이", 2, "야옹");
	if (!cat) {
		cout << "메모리 할당 실패, dog = NULL" << endl;
		exit(1);
	}

	cout << "-- 매개변수의 다형성 구현 --\n";
	crying(dog);
	crying(cat);
	running(dog);
	running(cat);

	cout << "-- 기본 복사생성자 직접 구현 --\n";
	Dog copyDog(*dog);
	cout << copyDog.getName() << endl;
	cout << copyDog.getAge() << endl;
	cout << copyDog.getBark() << endl;

	cout << "-- 소멸자 실행 --\n";
	delete dog;
	delete cat;

	return 0;

}