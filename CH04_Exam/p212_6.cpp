#include <iostream>
#include <string>
using namespace std;

int main(){

    int len;
    string answer;

    while(1){
        cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl << ">>";
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