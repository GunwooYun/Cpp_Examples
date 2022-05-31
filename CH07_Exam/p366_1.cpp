#include <iostream>
using namespace std;

class Book{
    string title;
    int price, pages;
public:
    Book(string title="", int price = 0, int pages = 0){
        this->title = title; this->price = price; this->pages = pages;
    }
    void show(){
        cout << title << ' ' << price << "WON " << pages << " page" << endl;
    }
    string getTitle(){return title;}
    void pulsPrice(int p){
        this->price += p;
    }
    void minusPrice(int p){
        this->price -= p;
    }
    friend void operator+=(Book op1, int op2);
    friend void operator-=(Book op1, int op2);
};

void operator+=(Book op1, int op2){
    op1.pulsPrice(op2);
    //return op1;
}

void operator-=(Book op1, int op2){
    op1.minusPrice(op2);
    //return op1;
}

int main(){

    Book a("young", 20000, 300), b("vision", 30000, 500);
    a += 500;
    b -= 500;
    a.show();
    b.show();

    return 0;
}