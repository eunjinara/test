//�ǽ�1 ȸ�� ��� �ۼ��ϱ�

//#include <iostream>
//
//namespace member {
//	std::string mem [3];
//	std::string memtel [3];
//}
//int main() {
//	std::cout << "3���� ȸ���� ���� �̸� ��й�ȣ�� ���������� �Է��ϼ���."<<std::endl;
//	using namespace member;
//	for (int i = 0; i < 3; i++) {
//		std::cout << i + 1<< "��° ȸ�� : ";
//		std::cin >> member::mem[i]>> member::memtel[i];
//
//	}
//
//	std::cout << "---------ȸ�� ��� ���� �б�---------" << std::endl;
//	for (int i = 0; i < 3; i++) {
//		std::cout << member::mem[i] <<" " << member::memtel[i] << std::endl;
//	}
//
//}



using namespace std;
#include <iostream>
#include <string>  //getline���� ���ؼ�
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
		cout << i + 1 << "��° ȸ�� �̸�, ��й�ȣ�� ���������� �Է� : " << endl;
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