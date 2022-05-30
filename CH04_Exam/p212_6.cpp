#include <iostream>
#include <string>
using namespace std;

int main(){

    int len;
    string answer;

    while(1){
        cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl << ">>";
        getline(cin,answer, '\n');
        if(!answer.compare("exit")) break;
        len = answer.length();
        cout << "length : " << len << endl;
        for(int i = len-1; i > -1; i--)
            cout << answer.at(i);
        cout << endl;
    }    
       
    return 0;
}