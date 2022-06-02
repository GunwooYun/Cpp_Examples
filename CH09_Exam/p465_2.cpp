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

class kmToMile : public  Converter{
protected:
    double convert(double src){
        return src / ratio;
    }
    string getSourceString(){
        return "Km";
    }
    string getDestString(){
        return "Mile";
    }

public:
    kmToMile(double ratio):Converter(ratio){
    }
    
};

int main(){
    kmToMile toMile(1.609344);
    toMile.run();
}

/*
Km is changed to Mile
Km Enter >> 25
Converted result : 15.5343 Mile
*/