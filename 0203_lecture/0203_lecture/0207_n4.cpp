#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
// input file stream -> ifstream
// ouput file stream -> ofstream

int main() {
	std::ofstream file("test1.txt", std::ios::out | std::ios::app);
	// ifstream : ���� -> ���α׷�
	// ofstream : ���α׷� -> ����
	// std::ofstream file;
	// file.open("test1.txt", std::ios::out | std::ios::app);
	if (file.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}

	file << "hello world!\nhihi"; // ����⸸ ����

	file.close();
	return 0;
}