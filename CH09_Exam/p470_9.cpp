#include <iostream>
using namespace std;

class Printer{
protected:
    string model;
    string manu;
    int printCnt;
    int availCnt;
public:
    Printer(string model, string manu, int availCnt) : model(model), manu(manu), availCnt(availCnt){
        printCnt = 0;
    }
    virtual void show(){
        cout << model << ", " << manu << ", " << printCnt << ", " << availCnt << endl;
    }
    virtual void print(int pages) = 0;
};

class Inkjet : public Printer{
private:
    int availInk;
public:
    Inkjet(string model, string manu, int availCnt, int availInk) : Printer(model, manu, availCnt){
        this->availInk = availInk;
        cout << "Created " << model << ", " << manu << ", " << printCnt << ", " << availCnt << endl;
    }
    virtual void show(){
        cout << model << ", " << manu << ", " << ", " << availCnt << ", " << availInk << endl;
    }
    void print(int pages){
        if(availCnt >= pages && availInk >= pages){
            cout << "Printed" << endl;
            availCnt -= pages;
            availInk -= pages;
            printCnt++;
        }
        else{
            if (availCnt < pages)
                cout << "paper not enough" << endl;
            else
                cout << "ink not enough" << endl;
        
        }
        
    }
};

class Laser : public Printer{
private:
    int availToner;
public:
    Laser(string model, string manu, int availCnt, int availToner) : Printer(model, manu, availCnt){
        this->availToner = availToner;
        cout << "Created " << model << ", " << manu << ", " << printCnt << ", " << availCnt << endl;
    }
    virtual void show(){
        cout << model << ", " << manu << ", " << ", " << availCnt << ", " << availToner << endl;
    }
    void print(int pages){
        if(availCnt >= pages && availToner >= pages){
            cout << "Printed" << endl;
            availCnt -= pages;
            availToner -= pages;
            printCnt++;
        }
        else{
            if (availCnt < pages)
                cout << "paper not enough" << endl;
            else
                cout << "ink not enough" << endl;
        
        }
        
    }
};

int main(){

    int choose, pages;
    char yn;
    Inkjet inkjet("Officejet v40", "HP", 5, 10);
    Laser laser("SCX-6x45", "SAMSUNG", 3, 20);
    cout << "There are 2 printers working" << endl;
    cout << "Inkjet : ";inkjet.show();
    cout << "Laser : ";laser.show();

    while(1){
        cout << "Choose printer (1:inkjet, 2:laser), pages >> ";
        cin >> choose >> pages;
        switch(choose){
            case 1:
                inkjet.print(pages);
                break;
            case 2:
                laser.print(pages);
                break;
            default :
                break;
        }
        inkjet.show(); laser.show();
        cout << "print more?(y/n) >> ";
        cin >> yn;
        if(yn == 'n') break;
    }
    
}

/*
Created Officejet v40, HP, 0, 5
Created SCX-6x45, SAMSUNG, 0, 3
There are 2 printers working
Inkjet : Officejet v40, HP, , 5, 10
Laser : SCX-6x45, SAMSUNG, , 3, 20
Choose printer (1:inkjet, 2:laser), pages >> 1 4
Printed
Officejet v40, HP, , 1, 6
SCX-6x45, SAMSUNG, , 3, 20
print more?(y/n) >> y
Choose printer (1:inkjet, 2:laser), pages >> 2 10
paper not enough
Officejet v40, HP, , 1, 6
SCX-6x45, SAMSUNG, , 3, 20
print more?(y/n) >> y
Choose printer (1:inkjet, 2:laser), pages >> 2 2
Printed
Officejet v40, HP, , 1, 6
SCX-6x45, SAMSUNG, , 1, 18
print more?(y/n) >> n
*/