#include <iostream>
#include <string>
using namespace std;

class CoffeeVendingMachine{
    Container tong[3];
    void fill();
    void selectEspresso();
    void selectAmericano();
    void selectSugarCoffee();
    void show();
public:
    void run();
};

class Container{
    int size;
public:
    Container(){size = 10;}
    void fill();
    void consume();
    int getSize();
}

int main(){
    
             
    return 0;
}