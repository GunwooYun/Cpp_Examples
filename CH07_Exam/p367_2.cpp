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
    int getPrice(){ return price; }
    int getPages(){ return pages; }
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

bool operator==(Book op1, int op2){
    if(op1.getPrice() == op2) return true;
    else return false;
}

bool operator==(Book op1, string op2){
    if(op1.getTitle() == op2) return true;
    else return false;
}

bool operator==(Book op1, Book op2){
    if((op1.getTitle() == op2.getTitle()) && (op1.getPrice() == op2.getPrice()) && (op1.getPages() == op2.getPages())) return true;
    else return false;
}

int main(){

    Book a("c++", 30000, 500), b("JAVA", 30000, 500);
    if(a == 30000) cout << "price 30000" << endl;
    if(a == "c++") cout << "c++" << endl;
    if(a == b) cout << "books are same" << endl;
}

/*
price 30000
c++
*/