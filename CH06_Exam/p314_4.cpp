#include <iostream>
#include <string>
using namespace std;

class MyVector{
    int *mem;
    int size;
public:
    MyVector(int n = 100, int val = 0){
        mem = new int[n];
        size = n;
        for(int i = 0; i < size; i++)
            mem[i] = val;
    }
    void show(){
        for(int i = 0; i < size; i++)
            cout << mem[i] << ' ';
        cout << endl;
    }
};

int main(){
    MyVector mv;
    MyVector mv1(10, 1);
    mv.show();
    mv1.show();

}

/*
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
1 1 1 1 1 1 1 1 1 1
*/