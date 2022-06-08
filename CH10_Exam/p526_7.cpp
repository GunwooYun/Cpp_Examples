#include <iostream>
using namespace std;


class Circle{
    int radius;
public:
    Circle(int radius=1) { this->radius = radius; }
    int getRadius(){ return radius; }
};

template <class T>
T bigger(T a, T b){
    if(a > b) return a;
    else return b;
}

int main(){
    int a = 20,  b = 50, c;
    c = bigger(a, b);
    cout << "Which one is bigger 20 and 50 ? " << c << endl;
    Circle waffle(10), pizza(20), y;
    y = bigger(waffle.getRadius(), pizza.getRadius()); // Shoule be intger value
    cout << "The radius which has bigger radius waffle and pizza is " << y.getRadius() << endl;
}

/*
Which one is bigger 20 and 50 ? 50
The radius which has bigger radius waffle and pizza is 20
*/
