#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
    string tel;
public:
    Person();
    string getName(){return name;}
    string getTel(){return tel;}
    void set(string name, string tel);
};

Person::Person(){}

void Person::set(string name, string tel){
    this->name = name;
    this->tel = tel;
}

int main(){

    string tmpName, tmpTel;

    Person * pArr = new Person[3];

    for(int i = 0; i < 3; i++){
        cout << "Person " << i+1 << ">> ";
        
        cin >> tmpName >> tmpTel;
        pArr[i].set(tmpName, tmpTel);
        
    }
    cout << "모든 사람의 이름은 ";
    for(int i = 0; i < 3; i++){
        cout << pArr[i].getName() << " ";
    }
    cout << "전화번호 검색합니다. 이름을 입력하세요 >>";
    cin >>tmpName;
    cout << "전화번호는 ";

    for(int i = 0; i < 3; i++){
        if(!pArr[i].getName().compare(tmpName))
            cout << pArr[i].getTel();
    }

       
    return 0;
}