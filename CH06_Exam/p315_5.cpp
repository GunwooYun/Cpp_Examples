#include <iostream>
#include <string>
using namespace std;

class ArrayUtility{

public:
    static void intToDouble(int src[], double dst[], int size){
        for(int i = 0; i< size; i++){
            dst[i] = (double)src[i];
        }
    }
    static void doubleToInt(double src[], int dst[], int size){
        for(int i = 0; i< size; i++){
            dst[i] = (int)src[i];
        }
    }

};

int main(){
    int x[] = {1, 2, 3, 4, 5};
    double y[5];
    double z[] = {9.9, 8.8, 7.7, 6.6, 5.6};
    ArrayUtility::intToDouble(x,y,5);
    for(int i = 0; i< 5; i++) cout << y[i] << ' ';
    cout << endl;
    ArrayUtility::doubleToInt(z, x, 5);
    for(int i = 0; i< 5; i++) cout << x[i] << ' ';
    cout << endl;
}

/*
1 2 3 4 5 
9 8 7 6 5
*/