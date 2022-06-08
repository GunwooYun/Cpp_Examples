#include <iostream>
#include <vector>
using namespace std;



int main(){
    vector<int> v;
    double avg;
    int num;
    while(1){
        
        avg = 0;
        cout << "Enter integer ( 0 : exit ) >> ";
        cin >> num;
        if(num == 0) break;
        v.push_back(num);
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << ' ';
            avg += v[i];
        }
        cout << endl;
        cout << "Average = " << avg / v.size() << endl;

    }
    return 0;
}

/*
Enter integer ( 0 : exit ) >> 30
10 20 30 
Average = 20
Enter integer ( 0 : exit ) >> 40
10 20 30 40 
Average = 25
Enter integer ( 0 : exit ) >> 0
*/
