//int main() {
//	string password;
//	string name;
//	cout << "�̸��� �Է��ϼ��� :";
//	cin >> name;
//	cout << "��й�ȣ�� �Է��ϼ��� :";
//	cin >> password;
//	string login = name + " " + password;
//	std::ifstream file_r("member.txt");
//	if (!checkFileOpen(file_r)) return -1;
//	std::string line, file_content = "";
//	while (std::getline(file_r, line)) {
//		// file_content = file_content + line + "\n";
//		if (line == login) {
//			cout << "�α��� ����" << endl;
//			break;
//		}
//	}
//	if (line != login) {
//		cout << "�α��� ����" << endl;
//	}
//	return 0;
//}