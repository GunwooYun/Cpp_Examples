#include <iostream>
using namespace std;

template <class T>
bool search(T element, T* arr, int len){
    for(int i = 0; i < len; i++){
        if(arr[i] == element) return true;
    }
    return false;
}

int main(){
    int x[] = {1, 10, 100, 5, 4};
    if(search(100, x, 5)) cout << "100 included in array x" << endl;
    else cout << "100 not included in array x" << endl;
}

/*
100 included in array x
*/