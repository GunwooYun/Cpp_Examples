#include <iostream>
#include <map>
using namespace std;

class Who{
private:
    map<string, string> whoMap;
public:
    void run(){
        int menu;
        cout << "***** WHO *****" << endl;
        while(1){
            cout << "Insert : 1, Scan : 2, Exit : 3 >> ";
            cin >> menu;
            switch(menu){
                case 1 :
                    insert();
                    break;
                case 2 :
                    scan();
                    break;
                case 3 :
                    finish();
                    break;
            }
        }
    }
    void insert(){
        string name;
        string passwd;
        cout << "name password >> ";
        cin >> name >> passwd;
        whoMap.insert(make_pair(name, passwd));
    }
    void scan()
    {
        string name, passwd;

        cout << "name? ";
        cin >> name;
        if (whoMap.find(name) == whoMap.end())
        {
            cout << "No found";
            return;
        }
        // passwd = whoMap[name];
        while (1)
        {
            cout << "password? ";
            cin >> passwd;
            if (passwd == whoMap[name])
            {
                cout << "Success" << endl;
                break;
            }
            else
                cout << "Fail";
            cout << endl;
        }
    }
    void finish(){
        cout << "byebye" << endl;
        exit(0);
    }
};

int main(){
    Who who;
    who.run();
}

/*
***** WHO *****
Insert : 1, Scan : 2, Exit : 3 >> 1
name password >> john java
Insert : 1, Scan : 2, Exit : 3 >> 1
name password >> tom c
Insert : 1, Scan : 2, Exit : 3 >> 2
name? john
password? c
Fail
password? java
SuccessInsert : 1, Scan : 2, Exit : 3 >> 3
byebye
*/