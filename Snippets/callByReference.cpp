#include <iostream>

using namespace std;

int main(){
    int n = 2;
    int& refn = n;

    cout << "n : " << n << " refn : " << refn << endl;
    cout << "address n : " << &n << " refn : " << &refn << endl;
    return 0;
}