#include<iostream>

using namespace std;

int main(){

    double n1, n2, n3, n4, n5, max;
    cout << "5 ���� �Ǽ��� �Է��϶�>> ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    max = n1;

    if(n2 > max) max = n2;
    if(n3 > max) max = n3;
    if(n4 > max) max = n4;
    if(n5 > max) max = n5;

    cout << "���� ū �� = " << max;

    return 0;

    
}