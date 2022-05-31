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
    void run(int m);
};

void CoffeeVendingMachine::run(int m){
    switch(m){
        case 1 :
            fill();
            break;
        case 2 :
            selectEspresso();
            break;
        case 3 :
            selectAmericano();
            break;
        case 4 :
            selectSugarCoffee();
            break;
        case 5 :
            show();
            break;
        default :
            break;
    }
}

class Container{
    int size;
public:
    Container(){size = 10;}
    void fill();
    void consume();
    int getSize();
};

int main(){
    
    CoffeeVendingMachine machine;
    int menu;
    
    cout << "******** Running vending machine ********" << endl;
    while(1){
        cout << "Choose a menu(1 : esspresso, 2 : americano 3 : sugar coffee 4 : Check remaning, 5 : refill 6 : exit)>>";
        cin >> menu;
        switch(menu){
            case 1 :
                machine.run(1);
                break;
            case 2 :
                machine.run(2);
                break;
            case 3 :
                machine.run(3);
                break;
            case 4 :
                machine.run(4);
                break;
            case 5 :
                machine.run(5);
                break;
            case 6 :
                cout << "bye~!" << endl;
                return 0;
                break;
            default :
                break;
        }

    }
             
    return 0;
}