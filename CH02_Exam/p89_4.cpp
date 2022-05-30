#include<iostream>

using namespace std;

int main(){

    double n1, n2, n3, n4, n5, max;
    cout << "5 개의 실수를 입력하라>> ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    max = n1;

    if(n2 > max) max = n2;
    if(n3 > max) max = n3;
    if(n4 > max) max = n4;
    if(n5 > max) max = n5;

    cout << "제일 큰 수 = " << max;

    return 0;

    
}