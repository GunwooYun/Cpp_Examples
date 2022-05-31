#include <iostream>
#include <string>
using namespace std;

bool bigger(int a, int b, int& big){
    if(a == b) return true;
    else{
        if(a > b) big = a;
        else big = b;
        return false;
    }
}

int main(){
    int big;
    int n1 = 10, n2 = 20;
    if(bigger(n1, n2, big)) cout << "number same" << endl;
    else{
        cout << "bigger number is " << big << endl;
    }
}

/* OUTPUT : bigger number is 20 */