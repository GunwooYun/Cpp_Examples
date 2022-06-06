#include <iostream>
using namespace std;

template <class T>
T biggest(T* arr, int size){
    T max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int main(){
    int x[] = {1, 10, 100, 5, 4};
    double y[] = {3.1, 2.2, 4.7, 11.2, 7.7};
    cout << biggest(x, 5) << endl;
    cout << biggest(y, 5) << endl;
    return 0;
}

/*
100
11.2
*/