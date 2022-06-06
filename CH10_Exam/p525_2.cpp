#include <iostream>
using namespace std;

template <class T>
bool equalArrays(T* arrA, T* arrB, int size){
    int i = 0;
    while(i < size){
        if(arrA[i] != arrB[i]){
            return false;
        }
        i++;
    }
    return true;
}

int main(){
    int x[] = {1, 10, 100, 5, 4};
    int y[] = {1, 10, 100, 5, 4};

    double dx[] = {1.1, 10.1, 100.1, 5.4, 4.5};
    double dy[] = {1.1, 10.0, 100.1, 5.4, 4.5};
    if(equalArrays(x, y, 5)) cout << "same";
    else cout << "not same";
    cout << endl;
    if(equalArrays(dx, dy, 5)) cout << "same";
    else cout << "not same";
}

/*
same
not same
*/