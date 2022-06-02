#include <iostream>
using namespace std;

class LoopAdder{
    string name;
    int x, y, sum;
    void read();
    void write();
protected:
    LoopAdder(string name=""){
        this->name = name;
    }

    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    virtual int calculate() = 0; // pure virtual function
public:
    void run();
};

void LoopAdder::read(){
    cout << name << ":" << endl;
    cout << "Sum numbers from first to second. Enter two nums >> ";
    cin >> x >> y;    
}

void LoopAdder::write(){
    cout << "From " << x << " to " << y << " sum = " << sum << endl;
}

void LoopAdder::run(){
    read(); // read x, y
    sum = calculate();
    write();
}

class ForLoopAdder : public LoopAdder{
protected:
    int calculate(){
        int x = getX();
        int y = getY();
        int sum = 0;
        for(int i = x; i <= y; i++)
            sum += i;
        return sum;
    }
public:
    ForLoopAdder(string name):LoopAdder(name){
    }
};

int main(){
    ForLoopAdder forLoop("For Loop");
    forLoop.run();
}

/*
For Loop:
Sum numbers from first to second. Enter two nums >> 3 10
From 3 to 10 sum = 52
*/