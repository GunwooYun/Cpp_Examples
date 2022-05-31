#include <iostream>
#include <string>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle(int r) { radius = r; }
    int getRadius(){ return radius; }
    void setRadius(int r){ radius = r ;}
    void show(){ cout << "radius is " << radius << " of Circle" << endl; }

};

/* should be 'call by reference' */
void increaseBy(Circle& a, Circle& b){
    int r = a.getRadius() + b.getRadius();
    a.setRadius(r);
}

int main(){
    Circle x(10), y(5); // create two circles instance
    increaseBy(x, y);
    x.show();
}

/* OUTPUT : radius is 15 of Circle */