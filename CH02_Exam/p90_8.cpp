#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char name[100];
    int cnt = 0;
    int maxLen = 0;
    char maxName[20];
    cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
    
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