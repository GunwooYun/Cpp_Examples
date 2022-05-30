#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[30];
    cout << "? ";
    //int a, b;
    //char c;
    int cnt = 0;
    char * ptr;
    
    cin.getline(str, 30, '\n');

    ptr = strtok(str, " ");
    int a = atoi(ptr);

    ptr = strtok(NULL, " ");
    char b = ptr[0];

    ptr = strtok(NULL, " ");
    int c = atoi(ptr);

    int d = 0;

    
    switch(b){
        case '+' :
            d = a + c;
            break;
        case '-' :
            d = a - c;
            break;
        case '*' :
            d = a * c;
            break;
        case '/' :
            d = a / c;
            break;
        case '%' :
            d = a % c;
            break;
        default :
            break;
    }

    
    cout << a << " " << b << " " << c << " = " << d << endl;
    

    



    // for(int i = 0; i < 3; i++){
    //     cin.getline(str, 30, '\n');
    //     if(i == 1) c = str[0];
    //     else a = atoi(str);
    // }

    // while(*ptr){
    //     cnt++;
    //     //str++;
    //     ptr++;
    // }
    //cout << a << endl;
    //cout << a << c << b << endl;
    

    return 0;
}