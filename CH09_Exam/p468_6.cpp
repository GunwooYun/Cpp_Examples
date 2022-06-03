#include <iostream>
using namespace std;

class AbstractStack{
public:
    virtual bool push(int n) = 0;
    virtual bool pop(int& n) = 0;
    virtual int showSize() = 0;
};

class IntStack : public AbstractStack{
private:
    int top;
    int size;
    int* stack;
public:
    IntStack(int size = 10){
        this->size = size;
        stack = new int (size);
        top = -1;
    }
    bool push(int n);
    bool pop(int& n);
    int showSize();
};

bool IntStack::push(int n){
    if(top == size-1){
        cout << "stack is full" << endl;
        return false;
    }
    else{
        stack[++top] = n;
        return true;
    }
}

bool IntStack::pop(int& n){
    if(top < 0){
        cout << "stack is empty" << endl;
        return false;
    }
    else{
        n = stack[top--];
        return true;
    }
}

int IntStack::showSize(){
    return top+1;
}

int main(){
    IntStack stack;
    int n;
    cout << stack.showSize() << endl;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.pop(n);
    cout << n << endl;
    stack.pop(n);
    cout << n << endl;
    stack.pop(n);
    cout << n << endl;
    stack.pop(n);
    cout << n << endl;
    stack.pop(n);
    cout << n << endl;
    stack.pop(n);
    cout << n << endl;
    cout << stack.showSize() << endl;
    
    
}

/*
0
40
30
20
10
stack is empty
10
stack is empty
0
40
30
20
10
stack is empty
10
stack is empty
10
0
*/