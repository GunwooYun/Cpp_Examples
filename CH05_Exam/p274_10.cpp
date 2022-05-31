#include <iostream>
#include <string>
using namespace std;

class Buffer{

private:
    string text;
public:
    Buffer(string text){ this->text = text;}
    void add(string next){ text += next; }
    void print(){ cout << text << endl; }
};

Buffer& append(Buffer& b, string s){
    b.add(s);
    return b;
}

int main(){
    Buffer buf("Hello");
    Buffer& tmp = append(buf, "Guys");
    tmp.print();
    buf.print();
}

/* OUTPUT : HelloGuys
            HelloGuys
            */