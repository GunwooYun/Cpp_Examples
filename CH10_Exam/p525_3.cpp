#include <iostream>
using namespace std;

template <class T>
void reverseArray(T* arr, int size){
    T tmpArr[size];
    int i = size-1, j = 0;
    while(i >= 0){
        tmpArr[j] = arr[i];
        i--; j++;
    }
    
    for(i = 0; i < size; i++){
        arr[i] = tmpArr[i];
    }

}

int main(){
    int x[] = {1, 10, 100, 5, 4};
    reverseArray(x, 5);
    for(int i = 0; i < 5; i++) cout << x[i] << ' ';
    cout << endl;
}

/*
4 5 100 10 1
*/