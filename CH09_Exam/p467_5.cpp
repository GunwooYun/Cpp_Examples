#include <iostream>
using namespace std;

class AbstractGate{
protected:
    bool x, y;
public:
    void set(bool x, bool y){
        this->x = x;
        this->y = y;
    }
    virtual bool operation() = 0; // pure virtual function
};

class ANDGate : public AbstractGate{
public:
    bool operation(){
        if(x == true && y == true) return true;
        else return false;
    }
};

class ORGate : public AbstractGate{
public:
    bool operation(){
        if(x == true || y == true) return true;
        else return false;
    }
};

class XORGate : public AbstractGate{
public:
    bool operation(){
        if((x == true || y == true) || (x != true && y != true) || (x != false && y != false)) return true;
        else return false;
    }
};

int main(){
    ANDGate andGate;
    ORGate orGate;
    XORGate xorGate;

    andGate.set(true, false);
    orGate.set(true, false);
    xorGate.set(true, false);

    cout << boolalpha << andGate.operation() << endl;
    cout << boolalpha << orGate.operation() << endl;
    cout << boolalpha << xorGate.operation() << endl;
}

/*
false
true
true
*/