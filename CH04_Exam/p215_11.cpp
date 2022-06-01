#include <iostream>
#include <string>
using namespace std;

/*********************************************************
** tong[0] : coffee | tong[1] : water | tong[2] : sugar **
*********************************************************/

class Container{
    int size;
public:
    Container(){size = 10;}
    void fill();
    void consume();
    int getSize();
};

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

/* tong fill 10 */
void CoffeeVendingMachine::fill(){
    for(int i = 0; i < 3; i++){
        tong[i].fill();
    }
}

/* tong[0]-1, tong[1]-1 */
void CoffeeVendingMachine::selectEspresso(){
    tong[0].consume();
    tong[1].consume();
}

/* tong[0]-1, tong[1]-2 */
void CoffeeVendingMachine::selectAmericano(){
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
}

/* tong[0]-1, tong[1]-2, tong[2]-1*/
void CoffeeVendingMachine::selectSugarCoffee(){
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    tong[2].consume();
}

void CoffeeVendingMachine::show(){
    cout << "coffee : " << tong[0].getSize() << " water : " << tong[1].getSize() << " sugar : " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run(int m){
    switch(m){
        case 1 :
            selectEspresso();
            break;
        case 2 :
            selectAmericano();
            break;
        case 3 :
            selectSugarCoffee();
            break;
        case 4 :
            show();
            break;
        case 5 :
            fill();
            break;
        default :
            break;
    }
}

void Container::fill(){
    size = 10;
}

void Container::consume(){
    size--;
}

int Container::getSize(){
    return size;
}

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