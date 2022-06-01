#include <iostream>
#include <string>
using namespace std;

int big(int a, int b, int max = 100){
    int big;
    if(a > b) big = a;
    else big = b;
    if(big > max) return max;
    else return big;
}

int main(){
    int x = big(3,5);
    int y = big(300,60);
    int z = big(30, 60, 50);
    cout << x << ' ' << y << ' ' << z << endl;
}

/*
5 100 50
*/