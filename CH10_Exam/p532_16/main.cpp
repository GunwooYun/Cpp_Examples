#include <iostream>
#include <vector>
using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"

class Graphic{
private:
    vector<Shape *> v;
public:
    Graphic();
    void push();
    void del();
    void show();
    void finish();
    void run();
};

Graphic::Graphic(){ cout << "Graphic Editor" << endl; }

void Graphic::push(){
    int shapeChoice;
    //Line * line = new Line;
    //line->paint();
    cout << "Line : 1, Circle : 2, Rectangle : 3 >>";
    cin >> shapeChoice;
    #if 1
    switch(shapeChoice){
        case 1 :{
            Line * l = new Line();
            v.push_back(l);
            break;
        }
        case 2 :{
            Circle * c = new Circle();
            v.push_back(c);
            break;
        }
        case 3 :{
            Rect * r = new Rect();
            v.push_back(r);
            break;
        }
        default :
            break;
    }
    #endif
}

void Graphic::del(){
    if(v.empty()){
        cout << "vector is empty" << endl;
        return;
    }
    int index;
    cout << "Index to be deleted >>";
    cin >> index;
    if(index < 0 || index >= v.size()){}
    else{
    delete v.at(index);
    v.erase(v.begin()+index);
    }
}

void Graphic::show(){
    vector<Shape *>::iterator it;
    int i = 0;
    if(v.empty()){
        cout << "vector is empty" << endl;
        return;
    }
    cout << v.size() << endl;
    for(it = v.begin(); it != v.end(); it++){
        cout << i << ": ";
        v.at(i)->paint();
        i++;
    }
    //cout << v.at(0)->paint();
    #if 0
    for(int i = 0; i < v.size(); i++){
        cout << i << ": ";
        v.at(i)->paint();
        //->paint() << endl;
    }
    #endif
}

void Graphic::finish(){
    cout << "bye bye~!" << endl;
    exit(0);
}

void Graphic::run(){
    int choice;
    while (1)
    {
        cout << "Insert:1, Delete:2, Show:3, exit:4 >>";
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            del();
            break;
        case 3:
            show();
            break;
        case 4:
            finish();
            break;
        default:
            break;
        }
    }
}

int main(){
    Graphic g;
    g.run();
}

/*
Insert:1, Delete:2, Show:3, exit:4 >>3
2
0: Circle
1: Rect
Insert:1, Delete:2, Show:3, exit:4 >>2
Index to be deleted >>2
Insert:1, Delete:2, Show:3, exit:4 >>2
Index to be deleted >>-1
Insert:1, Delete:2, Show:3, exit:4 >>2
Index to be deleted >>5
Insert:1, Delete:2, Show:3, exit:4 >>2
Index to be deleted >>2
Insert:1, Delete:2, Show:3, exit:4 >>2
Index to be deleted >>1
Insert:1, Delete:2, Show:3, exit:4 >>2
Index to be deleted >>3
Insert:1, Delete:2, Show:3, exit:4 >>3
1
0: Circle
Insert:1, Delete:2, Show:3, exit:4 >>2
Index to be deleted >>0
Insert:1, Delete:2, Show:3, exit:4 >>2
vector is empty
Insert:1, Delete:2, Show:3, exit:4 >>0
Insert:1, Delete:2, Show:3, exit:4 >>4
bye bye~!
*/