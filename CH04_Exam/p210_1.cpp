#include <iostream>

using namespace std;

class Color{
    int red, green, blue;
public:
    Color(){ red = green = blue = 0; } // default construction
    Color(int r, int g, int b) { red = r; green = g; blue = b; }
    void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
    void show() { cout << red << ' ' << green << ' ' << blue << endl;}

};

int main(void){

    Color screenColor(255, 0, 0); // Declare class
    Color *p;
    p = &screenColor; // p indicates instance screenColor

    p->show();
    Color colors[3];

    p = colors;

    p->setColor(255, 0, 0);
    (p+1)->setColor(0, 255, 0);
    (p+2)->setColor(0, 0, 255);

    for(int i = 0; i< 3; i++) (p+i)->show();

    return 0;
}