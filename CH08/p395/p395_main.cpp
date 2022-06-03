/* Page 395. Exam 8-3. Inherit, constructor parameter */
#include <iostream>
#include <string>

using namespace std;

class TV {
private:
	int size;
public:
	TV() {
		size = 20;
	}
	TV(int size) {
		this->size = size;
	}
	int getSize() {
		return size;
	}
};

class WideTV : public TV {
	bool videoIn;
public:
	WideTV(int size, bool videoIn) : TV(size) {
		this->videoIn = videoIn;
	}
	bool getVideoIn() {
		return videoIn;
	}
};

class SmartTV : public WideTV {
	string ipAddr;
public:
	SmartTV(string ipAddr, int size) : WideTV(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() {
		return ipAddr;
	}
};

int main() {
	SmartTV htv("192.168.0.2", 32);
	cout << "size : " << htv.getSize() << endl;
	cout << "video in : " << boolalpha << htv.getVideoIn() << endl;
	cout << "ip : " << htv.getIpAddr() << endl;

}

/*
size : 32
video in : true
ip : 192.168.0.2
*/