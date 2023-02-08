//int main() {
//	string password;
//	string name;
//	cout << "이름을 입력하세요 :";
//	cin >> name;
//	cout << "비밀번호를 입력하세요 :";
//	cin >> password;
//	string login = name + " " + password;
//	std::ifstream file_r("member.txt");
//	if (!checkFileOpen(file_r)) return -1;
//	std::string line, file_content = "";
//	while (std::getline(file_r, line)) {
//		// file_content = file_content + line + "\n";
//		if (line == login) {
//			cout << "로그인 성공" << endl;
//			break;
//		}
//	}
//	if (line != login) {
//		cout << "로그인 실패" << endl;
//	}
//	return 0;
//}