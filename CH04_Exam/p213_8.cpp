#include <iostream>
#include <string>
using namespace std;

class Circle{
    int radius;
public:
    void setRadius(int radius);
    double getArea();
};

void Circle::setRadius(int radius){
    this->radius = radius;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(){

    //int len;
    //string answer;
    int cNum;
    cout << "���� ���� >> ";
    cin >> cNum;
    Circle * cArr = new Circle[cNum];
    int r, cnt = 0;
    
    
    for(int i = 1; i <= cNum; i++){
        cout << "�� " << i << "�� ������ >> ";
        cin >> r;
        cArr[i].setRadius(r);
        if(cArr[i].getArea() > 100) cnt++;
    }

    cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�" << endl;
       
    return 0;
}