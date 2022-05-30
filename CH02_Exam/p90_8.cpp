#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char name[100];
    int cnt = 0;
    int maxLen = 0;
    char maxName[20];
    cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>>";
    
    for(int i = 1; i <= 5; i++){
        cnt = 0;
        cin.getline(name, 100, ';');
        if(strlen(name) > maxLen) {
            maxLen = strlen(name);
            strcpy(maxName, name);
        }
       
        cout << i << " : " << name << endl;
        
    }
    cout << maxName << endl;


    return 0;
}