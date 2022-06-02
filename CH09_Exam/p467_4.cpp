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

class WhileLoopAdder : public LoopAdder{
    protected:
    int calculate(){
        int x = getX();
        int y = getY();
        int sum = 0;
        int i = x;
        while(i <= y){
            sum += i;
            i++;
        }
        return sum;
    }
public:
    WhileLoopAdder(string name):LoopAdder(name){
    }
};

class DoWhileLoopAdder : public LoopAdder{
protected:
    int calculate(){
        int x = getX();
        int y = getY();
        int sum = 0;
        int i = x;
        do{
            sum += i;
            i++;
        }while(i <= y);
        return sum;
    }
public:
    DoWhileLoopAdder(string name):LoopAdder(name){
    }
};

int main(){
    WhileLoopAdder whileLoop("While Loop");
    whileLoop.run();

    DoWhileLoopAdder doWhileLoop("Do While Loop");
    doWhileLoop.run();
}

/*
While Loop:
Sum numbers from first to second. Enter two nums >> 3 5
From 3 to 5 sum = 12
Do While Loop:
Sum numbers from first to second. Enter two nums >> 10 20
From 10 to 20 sum = 165
*/