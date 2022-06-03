/* Page 502. Exam 10-9. STL vector */
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v; // ����Ÿ�� ���� ����

	v.push_back(1); // 1����
	v.push_back(2); // 2����
	v.push_back(3); // 3����

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	v[0] = 10; // index 0�� ���Ұ� 10���� ����
	int m = v[2];
	v.at(2) = 5; // ���� 3��° ���� ����

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}

/*
1 2 3
10 2 5
*/