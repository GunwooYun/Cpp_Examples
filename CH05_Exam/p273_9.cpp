#include <iostream>
#include <string>
using namespace std;

class Accumulator{
private:
    int value;
public:
    Accumulator(int value); // member variable 'value' to be parameter 'value'
    Accumulator& add(int n); // value += n
    int get(); // return value
};

Accumulator::Accumulator(int value){
    this->value = value;
}

Accumulator& Accumulator::add(int n){
    this->value += n;
    return *this; // return instance itself
}

int Accumulator::get(){
    return value;
}
int main(){
    Accumulator acc(10);
    acc.add(5).add(6).add(7);
    cout << acc.get();
}

/* OUTPUT : 28
            */