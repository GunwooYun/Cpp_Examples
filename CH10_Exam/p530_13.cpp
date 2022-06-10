#include <iostream>
#include <map>
#include <cstdlib>

using namespace std;

class ManageScore{
private:
    map<string, int> scoreMap;
public:
    void save();
    void search();
    void exitScore();
    void start();
};

void ManageScore::save(){
    string name;
    int score;
    cout << "name & score >> ";
    cin >> name >> score;
    scoreMap.insert(make_pair(name, score));
}

void ManageScore::search(){
    if(scoreMap.empty()){
        cout << "There is no score information" << endl;
        return;
    }
    string name;
    cout << "name >> ";
    cin >> name;
    int score = scoreMap[name];
    cout << name << "'s score : " << score << endl;
}

void ManageScore::exitScore(){ 
    cout << " byebye\n";
    //return;
    exit(0);
}

void ManageScore::start(){
    int menu;
    cout << "***** HIGH SCORE ******" << endl;
    while(1){
        cout << "Insert : 1, Search : 2, Exit : 3 >> ";
        cin >> menu;
        switch(menu){
            case 1 :
                save();
                break;
            case 2 :
                search();
                break;
            case 3 :
                exitScore();
                //cout 
                break;
            default :
                break;
        }
    }
}

int main(){
    ManageScore classA;
    classA.start();
}