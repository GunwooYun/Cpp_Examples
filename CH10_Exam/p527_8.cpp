#include <iostream>
using namespace std;


class Comparable{
public:
    virtual bool operator > (Comparable& op2) = 0;
    virtual bool operator < (Comparable& op2) = 0;
    virtual bool operator == (Comparable& op2) = 0;
};

class Circle : public Comparable{
    int radius;
public:
    Circle(int radius=1) { this->radius = radius; }
    int getRadius(){ return radius; }
    bool operator > (Comparable& op2);
    bool operator < (Comparable& op2);
    bool operator == (Comparable& op2);
};

bool Circle::operator > (Comparable& op2){
    Circle * pc;
    pc = (Circle *)&op2; // down casting
    if(this->radius > pc->getRadius()) return true;
    else return false;
}

bool Circle::operator < (Comparable& op2){
    Circle * pc;
    pc = (Circle *)&op2; // down casting
    if(this->radius < pc->getRadius()) return true;
    else return false;
}

bool Circle::operator == (Comparable& op2){
    Circle * pc;
    pc = (Circle *)&op2; // down casting
    if(this->radius == pc->getRadius()) return true;
    else return false;
}

template <class T>
T bigger(T a, T b){
    if(a > b) return a;
    else return b;
}

int main(){
    int a = 20,  b = 50, c;
    c = bigger(a, b);
    cout << "Which one is bigger 20 and 50 ? " << c << endl;
    /* These instances will be up casting to be parameter */
    Circle waffle(10), pizza(20), y;
    y = bigger(waffle, pizza); // Shoule be intger value
    cout << "The radius which has bigger radius waffle and pizza is " << y.getRadius() << endl;
}

/*
Which one is bigger 20 and 50 ? 50
The radius which has bigger radius waffle and pizza is 20
*/
