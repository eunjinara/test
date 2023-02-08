//실습1 회원 명부 작성하기

//#include <iostream>
//
//namespace member {
//	std::string mem [3];
//	std::string memtel [3];
//}
//int main() {
//	std::cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요."<<std::endl;
//	using namespace member;
//	for (int i = 0; i < 3; i++) {
//		std::cout << i + 1<< "번째 회원 : ";
//		std::cin >> member::mem[i]>> member::memtel[i];
//
//	}
//
//	std::cout << "---------회원 명부 파일 읽기---------" << std::endl;
//	for (int i = 0; i < 3; i++) {
//		std::cout << member::mem[i] <<" " << member::memtel[i] << std::endl;
//	}
//
//}



using namespace std;
#include <iostream>
#include <string>  //getline쓰기 위해서
#include <fstream>
#include <vector>
int main() {
	string name[3];
	string num[3];

	ofstream file_w("member.txt");
	string members = " ";
	string line;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "번째 회원 이름, 비밀번호를 순차적으로 입력 : " << endl;
		cin >> name[i] >> num[i];
	}

	for (int i = 0; i < 3; i++)
	{
		members = name[i] + " " + num[i];
		file_w << members << "\n";
	}
	file_w.close();
	ifstream file_r("member.txt");

	while (getline(file_r, line))
	{
		cout << line << endl;
	}