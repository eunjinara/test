#include <iostream>

int main() {

	std::string friends[2] = { "ȫ�浿","������" };
	std::cout << friends[0];

	double nums[3] = { 1.5, 2.5, 3.5 };

	std::string fruit[2][3][2] = {
		{ {"",""}, {"",""}, {"", ""} },
		{{"",""}, {"",""}, {"", ""} }
	};

	return 0;
}