#include <iostream>
namespace seoul {
	std::string lnum;
	std::string lmark;
}
namespace busan {
	std::string lnum;
	std::string lmark;
}
int main() {
	seoul::lnum = "02";
	seoul::lmark = "����Ÿ��";
	std::cout << "seoul�� ������ȣ: " << seoul::lnum << std::endl << "seoul�� ���帶ũ: " << seoul::lmark << std::endl;
	using namespace busan;
	lnum = "051";
	lmark = "�ؿ��";
	std::cout << "busan�� ������ȣ: " << lnum << std::endl << "busan�� ���帶ũ: " << lmark;
}