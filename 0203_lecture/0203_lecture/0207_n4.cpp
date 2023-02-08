#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
// input file stream -> ifstream
// ouput file stream -> ofstream

int main() {
	std::ofstream file("test1.txt", std::ios::out | std::ios::app);
	// ifstream : 파일 -> 프로그램
	// ofstream : 프로그램 -> 파일
	// std::ofstream file;
	// file.open("test1.txt", std::ios::out | std::ios::app);
	if (file.fail()) {
		cout << "파일 없음" << endl;
		return -1;
	}

	file << "hello world!\nhihi"; // 덮어쓰기만 가능

	file.close();
	return 0;
}