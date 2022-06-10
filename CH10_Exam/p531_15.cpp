#include <iostream>
#include <vector>
using namespace std;

class Circle{
public:
    string name;
    int radius;
public:
    Circle(int radius, string name){
        this->radius = radius; this->name = name;
    }
    double getArea(){ return 3.14 * radius * radius; }
    string getName(){ return name; }
};

class ManageCircles{
private:
    vector<Circle*> circleVector;
public:
    void run(){
        int menu;
        bool checkRemove;
        cout << "***** Insert & Delete Circles *****" << endl;
        while(1){
            cout << "Insert : 1, Delete : 2, showAll : 3 Exit : 4>> ";
            cin >> menu;
            switch(menu){
                case 1 :
                    insert();
                    break;
                case 2 :
                    checkRemove = remove();
                    if(checkRemove) cout << "Removed" << endl;
                    else cout << "Fail to remove" << endl;
                    break;
                case 3 :
                    showAll();
                    break;
                case 4 :
                    finish();
                    break;
                default :
                    break;
            }
        }
    }
    void insert(){
        int radius;
        string name;
        cout << "Circle's radius name >> ";
        cin >> radius >> name;
        Circle * c = new Circle(radius, name);
        //whoMap.insert(make_pair(name, passwd));
        circleVector.push_back(c);
    }
    bool remove(){
        if(circleVector.empty()){
            cout << "vector is empty" << endl;
            return false;
        }
        string name;
        vector<Circle*>::iterator it;
        cout << "What name you want to remove >>";
        cin >> name;
        for(int i = 0; i < circleVector.size(); i++){
            if(circleVector.at(i)->getName() == name){
                delete circleVector.at(i);
                circleVector.erase(circleVector.begin()+i);
                return true;
            }
        }
        return false;

    }
    void showAll(){
        for (auto loop : circleVector)
        {
            cout << loop->getName() << endl;
        }
    }
    void finish(){
        cout << "byebye" << endl;
        exit(0);
    }
};

int main(){
    ManageCircles managecircles;
    managecircles.run();
}

/*
Insert : 1, Delete : 2, showAll : 3 Exit : 4>> 1
Circle's radius name >> 4 donut
Insert : 1, Delete : 2, showAll : 3 Exit : 4>> 3
donut
waffle
pizza
donut
Insert : 1, Delete : 2, showAll : 3 Exit : 4>> 2
What name you want to remove >>donut
Removed
Insert : 1, Delete : 2, showAll : 3 Exit : 4>> 3
waffle
pizza
donut
Insert : 1, Delete : 2, showAll : 3 Exit : 4>> 2
What name you want to remove >>pizza
Removed
Insert : 1, Delete : 2, showAll : 3 Exit : 4>> 3
waffle
donut
Insert : 1, Delete : 2, showAll : 3 Exit : 4>> 4
byebye
*/