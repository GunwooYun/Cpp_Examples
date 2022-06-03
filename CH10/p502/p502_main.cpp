/* Page 502. Exam 10-9. STL vector */
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v; // 정수타입 벡터 생성

	v.push_back(1); // 1삽입
	v.push_back(2); // 2삽입
	v.push_back(3); // 3삽입

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	v[0] = 10; // index 0의 원소값 10으로 변경
	int m = v[2];
	v.at(2) = 5; // 벡터 3번째 원소 변경

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}

/*
1 2 3
10 2 5
*/