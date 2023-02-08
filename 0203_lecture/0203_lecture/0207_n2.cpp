#include <iostream>
namespace ns_test1 {
	namespace ns_test2 {
		int num = 0;
	}
}


int main() {
	std::cout << ns_test1::ns_test2::num;

	return 0;
}