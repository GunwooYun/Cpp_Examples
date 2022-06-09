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
};

class WordTest{
private:
    vector<Word> wordVector;
public:
    void saveWord();
    void testWord();
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
    int questionIdx;
    cout << "Let's start english word test. other number -> exit (1~4 only)" << endl;
    while(1){
        questionIdx = rand() % wordVector.size();
        
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

*/