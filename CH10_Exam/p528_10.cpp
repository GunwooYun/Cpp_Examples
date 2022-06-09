#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

class Nation{
private:
    string countryName;
    string capitalName;
public:
    void setCountry(string name){
        countryName = name;
    }
    void setCapital(string name){
        capitalName = name;
    }
    string getCountry(){
        return countryName;
    }
    string getCapital(){
        return capitalName;
    }
};

void enterInfo(vector<Nation> &v, int& rn){
    string country;
    string capital;
    
    cout << "Now saved coutries are " << v.size() << endl;
    cout << "Enter country and capital (no no -> finish enter)" << endl;

    while(1){
        cout << v.size() + 1 << ">> ";
        cin >> country >> capital;
        if(country == "no" && capital == "no") break;
        for(int i = 0; i < v.size(); i++){
            if(country == v[i].getCountry() && capital == v[i].getCapital()){
                cout << "Already exists!!" << endl;
                continue;
            }
        }
        Nation n;
        n.setCountry(country);
        n.setCapital(capital);
        v.push_back(n);
        
    }
    rn = v.size();

}

void quiz(vector<Nation> &v, int& rn){
    int randNum;
    string answer;
    srand((unsigned int)time(NULL));
    while(1){
        randNum = rand() % rn;
        cout << v[randNum].getCountry() << "'s capital? ";
        cin >> answer;
        if(answer == "exit") break;
        if(v[randNum].getCapital() == answer){
            cout << "Correct!!" << endl;
        }
        else
            cout << "NO !!" << endl;
    }
}



int main(){
    vector<Nation> v;
    int menu;
    int randNumber;
    cout << "***** Start capital game! *****" << endl;
    while(1){
        cout << "Enter info : 1, Quiz : 2, Exit : 3 >> ";
        cin >> menu;
        if(menu == 3) break;
        switch(menu){
            case 1:
            enterInfo(v, randNumber);
                break;
            case 2:
            quiz(v, randNumber);
                break;
            case 3:
                return 0;
            default:
                break;
        }
    }
}
/*
Enter country and capital (no no -> finish enter)
1>> korea seoul
2>> japan tokyo
3>> china beijing
4>> no no
Enter info : 1, Quiz : 2, Exit : 3 >> 2
japan's capital? tokyo
*/

class QuizCapital{
private:
    
    
public:

    QuizCapital();
    bool pushCountry(vector<string> v, string name);
    void quizCountry(string name);
    void play();
};

    
QuizCapital::QuizCapital(){
}

bool QuizCapital::pushCountry(vector<string> v, string name){

}

void QuizCapital::quizCountry(string name){

}

void QuizCapital::play(){
    cout << "***** Start capital game! *****" << endl;
}
