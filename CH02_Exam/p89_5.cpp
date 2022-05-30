#include <iostream>
using namespace std;

int main(){

    int cnt = 0;
    char str[100];
    char ptr = str;
    cout << "문자들을 입력하라(100개 미만)." << endl;
    cin.getline(str, 100, '\n');
    cout << str << endl;

    while(*str){
        if(*ptr == 'x') cnt++;
        ptr++;
    }
    cout << cnt << endl;
    return 0;
}