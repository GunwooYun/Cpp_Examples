#include <iostream>
#include <string>
using namespace std;

class MyIntStack{
private:
    int *p; // pointer to stack
    int size; // stack maximum size
    int top;
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack& s);
    ~MyIntStack();
    bool push(int n); // push integer n, full?false:true
    bool pop(int &n); // pop and save n, empty?false:true
};

MyIntStack::MyIntStack(int size){
    top = -1;
    p = new int[size];
    if(p == NULL){
        cout << "Failed to make array" << endl;
        exit(1);
    }
}

MyIntStack::~MyIntStack(){
    if(p){
        delete[] p;
        p = NULL;
    }
    else return;
}
MyIntStack::MyIntStack(const MyIntStack& s){
     this->size = s.size;
     this->top = -1;
     this->p = new int[size];
     if(p == NULL){
        cout << "Failed to make array" << endl;
        exit(1);
        }
    }

bool MyIntStack::push(int n){
    if(top == size-1) return false;
    else{
        p[++top] = n;
        return true;
        }
}

bool MyIntStack::pop(int& n){
    if(top == -1) return false;
    else{
        n = p[top--];
        return true;
    }
}

int main(){

    MyIntStack a(10);
    a.push(10);
    a.push(20);
    
    MyIntStack b = a;
    b.push(30);

    int n;
    a.pop(n);
    cout << "popped value from stack a : " << n << endl;
    b.pop(n);
    cout << "popped value from stack b : " << n << endl;
}

/* OUTPUT : popped value from stack a : 20
            popped value from stack b : 30
            */