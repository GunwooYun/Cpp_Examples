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
    cout << "��� ����� �̸��� ";
    for(int i = 0; i < 3; i++){
        cout << pArr[i].getName() << " ";
    }
    cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ��� >>";
    cin >>tmpName;
    cout << "��ȭ��ȣ�� ";

    for(int i = 0; i < 3; i++){
        if(!pArr[i].getName().compare(tmpName))
            cout << pArr[i].getTel();
    }

       
    return 0;
}