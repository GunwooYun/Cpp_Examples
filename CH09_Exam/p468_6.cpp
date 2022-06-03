#include <iostream>
using namespace std;

class AbstractStack{
public:
    virtual bool push(int n) = 0;
    virtual bool pop(int& n) = 0;
    virtual int size() = 0;
};

class IntStack : public AbstractStack{
private:
    int top;
    int* stack;
public:
    IntStack(int size = 10){
        stack = new int (size);
    }
    bool push(int n);
    bool pop(int& n);
};

bool IntStack::push(int n){

}

bool IntStack::pop(int& n){
    
}

int main(){
    
}

/*
false
true
true
*/