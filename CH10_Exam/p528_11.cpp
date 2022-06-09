#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

class Book{
private:
    int year;
    string name;
    string author;
public:
    Book(int year, string name, string author) : year(year), name(name), author(author){}
    void setYear(int year){
        this->year = year;
    }
    void setName(string name){
        this->name = name;
    }
    void setAuthor(string author){
        this->author = author;
    }
    int getYear(){
        return year;
    }
    string getName(){
        return name;
    }
    string getAuthor(){
        return author;
    }
};

void manageBook(vector<Book> &v){
        cout << "Enter a book to be saved. If you enter -1 in year, exit save menu." << endl;
        int year;
        string name;
        string author;
        while(1){
            cout << "year >>";
            cin >> year;
            if(year == -1) break;
            cout << "name >>";
            cin >> name;
            cout << "author >>";
            cin >> author;
            Book b(year, name, author);
            v.push_back(b);
        }
}



void showBook(vector<Book> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i].getName() << " ";
    }
    cout << endl;
}

int searchBookByAuthor(vector<Book> &v){
    string authorName;
    int index = 0;
    cout << " Total books [" << v.size() << "]" << endl;
    cout << "Enter author name >> ";
    cin >> authorName;
    cout << authorName;
    while(index < v.size()){
        if(v[index].getAuthor() == authorName){
            return index;
        }
        index++;
    }
    cout << "index : " << index << endl;
}

int searchBookByYear(vector<Book> &v){
    //string authorName;
    int year;
    int index = 0;
    cout << " Total books [" << v.size() << "]" << endl;
    cout << "Enter year >> ";
    cin >> year;
    while(index < v.size()){
        if(v[index].getYear() == year){
            return index;
        }
        index++;
    }
    cout << "index : " << index << endl;
}



int main(){
    int idx;
    vector<Book> v;
    manageBook(v);
    showBook(v);
    idx = searchBookByAuthor(v);
    cout << v[idx].getYear() << " " << v[idx].getName() << " " << v[idx].getAuthor() << endl;
    idx = searchBookByYear(v);
    cout << v[idx].getYear() << " " << v[idx].getName() << " " << v[idx].getAuthor() << endl;   
}

/*
Enter a book to be saved. If you enter -1 in year, exit save menu.
year >>2001
name >>love
author >>tom
year >>2011
name >>happy
author >>mike
year >>-1
love happy
 Total books [2]
Enter author name >> tom
tom2001 love tom
 Total books [2]
Enter year >> 2011
2011 happy mike
*/