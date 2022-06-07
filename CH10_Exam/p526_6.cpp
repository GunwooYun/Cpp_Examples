#include <iostream>
using namespace std;


template <class T>
T * removeArr(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize){
    int cnt = 0;
    int idx = 0;
    for(int i = 0; i < sizeSrc; i++){
        for(int j = 0; j < sizeMinus; j++){
            if(src[i] == minus[j]){
                //cnt++;
                src[i] = 0;
            }
        }
    }
    for(int i = 0; i < sizeSrc; i++){
        if(src[i] == 0) cnt++;
    }
    retSize = sizeSrc - cnt;
    T * newArr = new T(retSize);
    for(int i = 0; i < sizeSrc; i++){
        if(src[i] != 0){
            newArr[idx++] = src[i];
        }
    }
    return newArr;
}

int main(){
    int size;
    int a[] = {1, 10, 20, 30};
    int b[] = {2, 20, 30, 80, 160};
    int* rmArr = removeArr(a, 4, b, 5, size);
    for(int i = 0; i < size; i++)
        cout << rmArr[i] << ' ';
    cout << endl;
    delete[] rmArr;
}

/*
1 10
*/
