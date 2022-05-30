#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("Hello, ");
    //cout << str.size() << endl;
    //cout << str.capacity() << endl;
    cout << str.append("world") << endl;

    int foundIdx = str.find("lo");

    cout << "Found index of 'lo' >> " << foundIdx << endl;
    return 0;
}