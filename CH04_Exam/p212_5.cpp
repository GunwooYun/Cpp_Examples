#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){

    int len;
    string answer;
    srand((unsigned)time(0));
    //cout << rand() << endl;
    int randNum;
    char  randChar;
    randChar = (rand() % 25)+65; // Upper
    //randChar = (rand() % 25)+97; // Lower
    char randStr[2];
    randStr[1] = '\0';
        
    while(1){

        cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl << ">>";
        getline(cin,answer, '\n');
        if(!answer.compare("exit")) break;
        len = answer.length();
        randNum = rand() % len;
        randChar = (rand() % 25)+65;
        randStr[0] = randChar;
        cout << answer.replace(randNum, 1, randStr) << endl;
    }    
       
    return 0;
}