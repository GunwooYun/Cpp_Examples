#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Word{
private:
    string eng;
    string kor;
public:
    Word(string eng, string kor) : eng(eng), kor(kor){}
    string getEng(){ return eng; }
    string getKor(){ return kor; }
};

class WordTest{
private:
    vector<Word> wordVector;
public:
    void saveWord();
    void testWord();
    //void makeWrongAnswer();
    void exit();
    void run();
};

void WordTest::saveWord(){
    string eng;
    string kor;
    cout << "Finish saving if you enter 'exit' " << endl;
    while(1){
        cout << "English >> ";
        cin >> eng;
        if(eng == "exit") break;
        cout << "Korean >> ";
        cin >> kor;
        Word word(eng, kor);
        wordVector.push_back(word);
    }
}

void WordTest::testWord(){
    srand((unsigned int)time(NULL));
    int questionArr[4] = {-1};
    int question;
    int wrongAnswerIdx[3] = {-1};
    int tempAnswerIdx;
    int tmpIdx;
    int cnt = 0;
    int answer;
    cout << "Let's start english word test. other number -> exit (1~4 only)" << endl;
    while(1){
        if(wordVector.size() < 4){
            cout << "Not enough saved words, please save more words" << endl;
            break;
        }
        else{
            while(1){
                for(int i = 0; i < 4; i++){
                    questionArr[i] = rand() % wordVector.size();
                }
                if((questionArr[0] != questionArr[1]) && (questionArr[0] != questionArr[2]) && (questionArr[0] != questionArr[3])
                && (questionArr[1] != questionArr[2]) && (questionArr[1] != questionArr[3])
                && (questionArr[2] != questionArr[3]))
                    break;
            }
            question = rand() % 4;
            cout << wordVector.at(questionArr[question]).getEng() << "?" << endl;
            for(int i = 0; i < 4; i++){
                cout << "(" << i+1 << ") " << wordVector.at(questionArr[i]).getKor() << " ";
            }
            cout << ":> ";
            cin >> answer;
            if(question == (answer-1)){
                cout << "Excellent!!";
            }
            else{
                cout << "No!!";
            }
        cout << endl;
        }
    }

}

void WordTest::exit(){
    cout << "exit() " << endl;
}

void WordTest::run(){
    cout << "***** Let's start word test *****" << endl;
    int menu;
    while(1){
        cout << "Save word : 1, Test word : 2, exit : other key >> ";
        cin >> menu;
        if(menu > 2 && menu < 1) exit();
        else{
            switch(menu){
                case 1 :
                    saveWord();
                    break;
                case 2 :
                    testWord();
                    break;
                case 3 :
                    exit();
                    break;
                default :
                    break;
            }
        }
    }
}


int main(){
    WordTest test;
    test.run();
}

/*
English >> seven
Korean >> chil
English >> exit
Save word : 1, Test word : 2, exit : other key >> 2
Let's start english word test. other number -> exit (1~4 only)
three?
(1) sa (2) il (3) o (4) sam :> 4
Excellent!!
*/