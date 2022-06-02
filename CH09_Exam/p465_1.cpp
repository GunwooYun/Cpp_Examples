#include <iostream>
using namespace std;

class Converter{
protected:
    double ratio;
    virtual double convert(double src) = 0;
    virtual string getSourceString() = 0;
    virtual string getDestString() = 0;

public:
    /* constructor */
    Converter(double ratio){
        this->ratio = ratio;
    }
    void run(){
        double src;
        cout << getSourceString() << " is changed to " << getDestString() << endl;
        cout << getSourceString() << " Enter >> ";
        cin >> src;
        cout << "Converted result : " << convert(src) <<" " << getDestString() << endl;
    }
    
};

class WonToDollor : public  Converter{
protected:
    double convert(double src){
        return src / ratio;
    }
    string getSourceString(){
        return "WON";
    }
    string getDestString(){
        return "DOLLOR";
    }

public:
    WonToDollor(double ratio):Converter(ratio){
    }
    
};

int main(){
    WonToDollor wd(1010);
    wd.run();
}

/*
WON is changed to DOLLOR
WON Enter >> 10000
Converted result : 9.90099 DOLLOR
*/