/* Page 211. CH4. Exam 3 */
#include <iostream>
#include <string>

using namespace std;

int main(void){
    
    string text;
    int cnt = 0;
    int cnt1 = 0;
    int idx = 0;
    cout << "���ڿ� �Է�>> ";
    
    getline(cin, text);

    for(int i = 0; i < text.length(); i++){
        if(text.at(i) == 'a') cnt++;
    }

    while(1){
      if((idx = text.find('a', idx)) < 0) {
          break;
          }
      else {
          cnt1++;
          idx++;
      }
    }
    
    cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
    cout << "���� a�� " << cnt1 << "�� �ֽ��ϴ�." << endl;    

    return 0;
}