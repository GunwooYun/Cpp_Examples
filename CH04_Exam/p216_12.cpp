#include <iostream>
#include <string>
using namespace std;

class Circle{
    int radius;
    string name;
public:
    void setCircle(string name, int raidus);
    double getArea();
    string getName();
};



class CircleManager{
    Circle *p; // circle array pointer
    int size;
public:
    CircleManager(int size); // create array in size
    ~CircleManager(); // disconstructor
    void searchByName(); // search by name, then show
    void searchByArea(); // serach by area, show name bigger than area
    friend void accessCircleToSet(string n, int r);
};

CircleManager::CircleManager(int size){
    p = new Circle[size];
    if(p == NULL){
        cout << "failed to create array of p";
        exit(1);
    }
}

void accessCircleToSet(string n, int r){
    
}

int main(){
    int numOfCircles;
    cout << "How many circles ? ";
    cin >> numOfCircles;
    CircleManager cm(numOfCircles);
    for(int i = 0; i < numOfCircles; i++){
        cout << "Circle(" << i+1 << ") -> name & radius ? ";
    }

}

/*
Choose a menu(1 : esspresso, 2 : americano 3 : sugar coffee 4 : Check remaning, 5 : refill 6 : exit)>>4
coffee : 10 water : 10 sugar : 10
Choose a menu(1 : esspresso, 2 : americano 3 : sugar coffee 4 : Check remaning, 5 : refill 6 : exit)>>2
Choose a menu(1 : esspresso, 2 : americano 3 : sugar coffee 4 : Check remaning, 5 : refill 6 : exit)>>4
coffee : 9 water : 8 sugar : 10
Choose a menu(1 : esspresso, 2 : americano 3 : sugar coffee 4 : Check remaning, 5 : refill 6 : exit)>>2
Choose a menu(1 : esspresso, 2 : americano 3 : sugar coffee 4 : Check remaning, 5 : refill 6 : exit)>>2
Choose a menu(1 : esspresso, 2 : americano 3 : sugar coffee 4 : Check remaning, 5 : refill 6 : exit)>>4
coffee : 7 water : 4 sugar : 10
Choose a menu(1 : esspresso, 2 : americano 3 : sugar coffee 4 : Check remaning, 5 : refill 6 : exit)>>6
bye~!
*/