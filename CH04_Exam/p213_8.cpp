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
    cout << "원의 개수 >> ";
    cin >> cNum;
    Circle * cArr = new Circle[cNum];
    int r, cnt = 0;
    
    
    for(int i = 1; i <= cNum; i++){
        cout << "원 " << i << "의 반지름 >> ";
        cin >> r;
        cArr[i].setRadius(r);
        if(cArr[i].getArea() > 100) cnt++;
    }

    cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다" << endl;
       
    return 0;
}