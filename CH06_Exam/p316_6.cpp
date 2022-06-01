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

class ArrayUtility2{

public:
    static int* concat(int s1[], int s2[], int size){
        int * arr = new int[size];
        for(int i = 0; i < size; i++){
            if(i < 5) arr[i] = s1[i];
            else arr[i] = s2[i-5];
        }
        return arr;
    }
    static int* remove(int s1[], int s2[], int size, int& retSize){
        int cnt = 0;
        int len = 0;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(s1[i] == s2[j]) s1[i] = 0;
            }
        }
        for(int i = 0; i < size; i++){
            if(s1[i] != 0) cnt++;
        }
        int* arr = new int[cnt];
        retSize = cnt;
        for(int i = 0; i < size; i++){
            if(s1[i] != 0) arr[len++] = s1[i];
        }
        if(retSize > 0) return arr;
        else return NULL;
        
    }
};

int main(){
    int x[5], y[5];
    int retSize;
    cout << "Enter 5 integers. Insert them into array x >>";
    for(int i = 0; i < 5; i++) cin >> x[i];

    cout << "Enter 5 integers. Insert them into array y >>";
    for(int i = 0; i < 5; i++) cin >> y[i];
    cout << "Show merged array" << endl;
    
    int * result1 = ArrayUtility2::concat(x, y, 10);
    for(int i = 0; i < 10; i++) cout << result1[i] << ' ';
    cout << endl;

    int * result2 = ArrayUtility2::remove(x, y, 5, retSize);
    if(!result2){
        cout << "remove result : null" << endl;
        return 0;
    }
    cout << "array x - array y. cnt : " << retSize << endl;
    for(int i = 0; i < retSize; i++) cout << result2[i] << ' ';


}

/*
Enter 5 integers. Insert them into array x >>5 4 3 2 1  
Enter 5 integers. Insert them into array y >>3 2 1 0 -1
Show merged array
5 4 3 2 1 3 2 1 0 -1
array x - array y. cnt : 2
5 4
*/