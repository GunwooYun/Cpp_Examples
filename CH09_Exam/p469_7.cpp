#include <iostream>
using namespace std;

class Shape{
protected:
    string name; // name of shape
    int width, height; 
public:
    Shape(string n="", int w = 0, int h = 0){
        name = n;
        width = w;
        height = h;
    }
    virtual double getArea(){
        return 0; // return dummy
    }
    string getName(){
        return name; // return name
    }

};

class Oval : public Shape{
public:
    Oval(string n, int w, int h) : Shape(n, w, h){}
    double getArea(){
        return width * height;
    }
};

class Rect : public Shape{
public:
    Rect(string n, int w, int h) : Shape(n, w, h){}
    double getArea(){
        return 3.14 * width * height;
    }
};

class Trian : public Shape{
public:
    Trian(string n, int w, int h) : Shape(n, w, h){}
    double getArea(){
        return width * height / 2;
    }
};

int main(){
    Shape *p[3];
    //Shape *p = new Oval("test", 10, 20);
    //cout << p->getArea() << endl;

    p[0] = new Oval("cake1", 10, 20);
    p[1] = new Oval("cake2", 30, 40);
    p[2] = new Trian("cake3", 30, 40);

    for(int i = 0; i < 3; i++){
        cout << p[i]->getName() << ". Area is " << p[i]->getArea() << endl;
    }

    for(int i = 0; i < 3; i++) delete p[i];
}

/*
cake1. Area is 200
cake2. Area is 1200
cake3. Area is 600
*/