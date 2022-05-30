/* Page 211. CH4. Exam 4 */
#include <iostream>
#include <string>

using namespace std;

class Sample{
    int *p;
    int size;
public:
    Sample(int n){
        size = n; p = new int [n]; // n���� �迭 ����
    }

    void read(); // ���� �Ҵ���� ���� �迭 p�� ����ڷκ��� ������ �Է� ����
    void write(); // ���� �迭�� ȭ�鿡 ���
    int big(); // ���� �迭���� ���� ū �� ����
    ~Sample(); // �Ҹ���
};

void Sample::read(){
    for(int i = 0; i < size; i++)
        cin >> p[i];
}

void Sample::write(){
    for(int i = 0; i < size; i++)
        cout << p[i] << " ";
    cout << endl;
}

int Sample::big(){
    int max = p[0];
    for(int i = 0; i < size; i++){
        if(p[i] > max) max = p[i];
    }
    return max;
}

Sample::~Sample(){}



int main(void){
    Sample s(10); // 10�� ���� �迭�� ���� Sample ��ü ����
    s.read(); // Ű���忡�� ���� �迭 �б�
    s.write(); // ���� �迭 ���
    cout << "���� ū ���� " << s.big() << endl;

    return 0;
}