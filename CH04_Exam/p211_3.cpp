/* Page 211. CH4. Exam 3 */
#include <iostream>
#include <string>

using namespace std;

int main(void){
    
    string text;
    int cnt = 0;
    int cnt1 = 0;
    int idx = 0;
    cout << "문자열 입력>> ";
    
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
    
    cout << "문자 a는 " << cnt << "개 있습니다." << endl;
    cout << "문자 a는 " << cnt1 << "개 있습니다." << endl;    

    return 0;
}