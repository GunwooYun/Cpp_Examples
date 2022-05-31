#include <iostream>
#include <string>
using namespace std;

class MyIntStack{
private:
    int p[10]; // maximum 10
    int top; // index of top
public:
    MyIntStack();
    bool push(int n); // push integer n, full?false:true
    bool pop(int &n); // pop and save n, empty?false:true
};

MyIntStack::MyIntStack(){
    top = -1;
}

bool MyIntStack::push(int n){
    if(top == 9) return false;
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
    MyIntStack a;
    for(int i = 0; i < 11; i++){
        if(a.push(i)) cout << i << ' '; // pushed value echo
        else cout << endl << i+1 << " of index stack full" << endl;
    }
    int n;
    for(int i = 0; i < 11; i++){
        if(a.pop(n)) cout << n << ' '; // popped value echo
        else cout << endl << i+1 << " of index stack empty";
    }
    cout << endl;
}

/* OUTPUT : 0 1 2 3 4 5 6 7 8 9 
            11 of index stack full
            9 8 7 6 5 4 3 2 1 0
            11 of index stack empty
            */