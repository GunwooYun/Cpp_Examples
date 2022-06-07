#include <iostream>
//#include <cstdlib>
using namespace std;


template <class T>
T * concat(T a[], int sizea, T b[], int sizeb){
    T * newArr = new T(sizea + sizeb);
    for(int i = 0; i < sizea + sizeb; i++){
        if(i < sizea) newArr[i] = a[i];
        else newArr[i] = b[i - sizea];
    }
    return newArr;
}

int main(){
    int a[] = {1, 10, 20, 30};
    int b[] = {2, 20, 40, 80, 160};
    int * conArr = concat(a, 4, b, 5);
    //int arrLen = sizeof(conArr) / sizeof(conArr[0]);
    //cout << "length : " << _msize(conArr) << endl;
    //cout << "sizeof(conArr) : " << sizeof conArr << endl;
    for(int i = 0; i < 9; i++)
        cout << conArr[i] << ' ';
    cout << endl;
    delete[] conArr;
}

/*
1 10 20 30 2 20 40 80 160

Cannot get array of dynamic allocated.
*/
