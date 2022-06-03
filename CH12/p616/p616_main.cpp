/* Page 616. Exam 12-8. read():read block file */
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";

	ifstream fin;
	fin.open(file, ios::in | ios::binary); // �б� ���� ���� ����
	if (!fin) { // ���� ���� �˻�
		cout << "���� ���� ����";
		return 0;
	}

	int count = 0;
	char s[32]; // ��� ������ �о� ���� ����
	while (!fin.eof()) { // ���� ������ �д´�.
		fin.read(s, 32); // �ִ� 32 ����Ʈ�� �о� �迭 s�� ����
		int n = fin.gcount(); // ���� ���� ����Ʈ �� �˾Ƴ�
		cout.write(s, n); // ���ۿ� �ִ� n ���� ����Ʈ�� ȭ�鿡 ���
		count += n;
	}

	cout << "���� ����Ʈ ���� " << count << endl;
	fin.close(); // �Է� ���� �ݱ�
}

/*
; for 16-bit app support
[386Enh]
woafont=dosapp.fon
EGA80WOA.FON=EGA80WOA.FON
EGA40WOA.FON=EGA40WOA.FON
CGA80WOA.FON=CGA80WOA.FON
CGA40WOA.FON=CGA40WOA.FON

[drivers]
wave=mmdrv.dll
timer=timer.drv

[mci]
���� ����Ʈ ���� 219
*/