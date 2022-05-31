#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Book{
    char *title;
    int price;
public:
    Book(const char* title, int price);
    ~Book();
    void set(const char* title, int price);
    void show(){cout << title << ' ' << price << "WON" << endl; }
    Book(const Book& b);
};

Book::Book(const char* title, int price){
    int strLen = strlen(title);
    this->title = new char[strLen+1];
    strcpy(this->title, title);
    this->price = price;
}

Book::~Book(){
    if(title) delete[] title;
}

Book::Book(const Book& b){
    int strLen = strlen(b.title);
    this->title = new char[strLen+1];
    strcpy(this->title, b.title);
    this->price = price;
}

void Book::set(const char* title, int price){
    strcpy(this->title, title);
    this->price = price;
}

int main(){
    Book cpp("C++", 10000);
    Book java = cpp;
    java.set("JAVA", 12000);
    cpp.show();
    java.show();
}

/* OUTPUT : C++ 10000WON
            JAVA 12000WON
            */