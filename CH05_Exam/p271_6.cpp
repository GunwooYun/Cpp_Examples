#include <iostream>
#include <string>
using namespace std;

char& find(char a[], char c, bool& success){
    while(*a){
        if(*a == c){
            success = true;
            return a;
        }
        a++;
    }
}

int main(){
    char s[] = "Mike";
    bool b = false;
    char& loc = find(s, 'M', b);
    if(b == false){
        cout << "Cannot find 'M'" << endl;
        return 0;
    }
    loc = 'm'; // 'M' position is to be 'm'
    cout << s << endl; // "mike" shows
}

/* OUTPUT : radius is 15 of Circle */