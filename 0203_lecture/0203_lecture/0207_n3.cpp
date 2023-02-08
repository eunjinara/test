#include <iostream>
#include <fstream> // ������ �ٷ�� ���� ��� ����. ifstream
#include <string> // getline

//using namespace std;
using std::ifstream;
using std::cout;
using std::endl;

int main() {
	ifstream file;
	file.open("test.txt"); // ���ϸ� �ش��ϴ� ���� ����
	// file.fail() // ���� ���� �Ϳ� �����ϸ� true. �����ϸ� 
	if (file.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}

	cout << "�ƹ�����";

	std::string str, str2, line;
	// file >> str >> str2; // ���� �� ������ str�� ����. ����(����, ����) ������ �о��.

	/*
	while (file >> str >> str2) {
		cout << str << " " << str2;
		cout << std::endl;
	}
	*/

	// std::getline(file, line); // file�� ������ �� �پ� �о line�� ���� (\n ����)
	int i = 1;
	while (std::getline(file, line)) {
		if (i == 2) cout << line << endl;
		i++;
	}

	file.close(); // file �ݱ�

	return 0;
}