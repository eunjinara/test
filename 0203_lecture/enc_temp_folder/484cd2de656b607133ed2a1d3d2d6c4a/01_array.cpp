#include <iostream>
int main() {
	double nums[3] = { 1.5, 2.5, 3.5 };

	std::string fruit[2][3] = {
		{ "apple", "banana", "orange"},
		{ "apple2", "banana2", "orange2" }
	};

	// fruit[1] = { "apple2", "banana2", "orange2" }

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << fruit[i][j] << std::endl;
		}
	}


	for (auto &f : fruit) {
		for (auto f2 : f) {
			std::cout << f2 << std::endl;
		}
	}


	std::cout << fruit << std::endl;

	std::string friends[3] = { "ȫ�浿", "������", "�ڵ���" };
	/*std::cout << friends[0] << std::endl;
	std::cout << friends[1] << std::endl;
	std::cout << friends[2] << std::endl;*/

	for (int i = 0; i < 3; i++) {
		std::cout << friends[i] << std::endl;
	}

	for (std::string f : friends) {
		std::cout << f << std::endl;
	}


	
	// friends = { "ȫ�浿", "������" }
	return 0;
}

