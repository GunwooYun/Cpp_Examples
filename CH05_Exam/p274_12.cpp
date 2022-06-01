#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Dept{
    int size;
    int* scores;
public:
    Dept(int size){
        this->size = size;
        scores = new int[size];
    }
    //Dept(const Dept& dept); // copy constructor
    ~Dept(); // deconstructor
    int getSize(){ return size; }
    void read();
    bool isOver60(int index);
};

void Dept::read(){
    cout << "10 scores enter >> ";
    for(int i = 0; i < size; i++)
        cin >> scores[i];
}

bool Dept::isOver60(int index){
    if(scores[index] >= 60) return true;
    else return false;
}

Dept::~Dept(){
    if(scores) delete[] scores;
}

// Dept::Dept(const Dept& dept){

// }

int countPass(Dept& dept){ // call by reference <-- don't call copy constructor
    int count = 0;
    for(int i = 0; i < dept.getSize(); i++){
        if(dept.isOver60(i)) count++;
    }
    return count;
}

int main(){
    Dept com(10);
    com.read(); // save scores entered to array
    int n = countPass(com);
    cout << "above 60 points : " << n << endl;
}

/* OUTPUT : above 60 points : 5
            */