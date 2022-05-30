/* Page 211. CH4. Exam 2 */
#include <iostream>

using namespace std;

int main(void){
    
    int *arr = new int [5]; // allocate arrary in heap
    int sum = 0;
    
    cout << "정수 5개 입력>>";

    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    for(int i = 0; i < 5; i++) sum += arr[i];

    cout << "평균 " << (double)sum / 5 << endl; // Casting type from int to double to show float result

    
    return 0;
}