#include <iostream>
#include <string>
int main() {
	//double nums[3] = { 1.5, 2.5, 3.5 };

	//std::string fruit[2][3] = {
	//	{ "apple", "banana", "orange"},
	//	{ "apple2", "banana2", "orange2" }
	//};

	//// fruit[1] = { "apple2", "banana2", "orange2" }

	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		std::cout << fruit[i][j] << std::endl;
	//	}
	//}


	//for (auto &f : fruit) {
	//	for (auto f2 : f) {
	//		std::cout << f2 << std::endl;
	//	}
	//}


	//std::cout << fruit << std::endl;

	//std::string friends[3] = { "홍길동", "성춘향", "코딩온" };
	///*std::cout << friends[0] << std::endl;
	//std::cout << friends[1] << std::endl;
	//std::cout << friends[2] << std::endl;*/

	//for (int i = 0; i < 3; i++) {
	//	std::cout << friends[i] << std::endl;
	//}
	////sizeof 안에 변수 or type을 인자로 넘겨줌. 크기를 byte 단위로 구함.
	////sizeof(std::string) 대신 sizeof(friends[0])로 나눠도 됨
	//for (int i = 0; i < sizeof(friends)/sizeof(std::string); i++) {
	//	std::cout << friends[i] << std::endl;
	//}

	//for (std::string f : friends) {
	//	std::cout << f << std::endl;
	//}


	//
	//// friends = { "홍길동", "성춘향" }


	//std::string city[5] = { "South Korea", "Switzerland", "France", "Italy", "Taiwan" };
	//for (int k = 0; k < 5; k++) {
	//	std::cout << city[k]<<std::endl;
	//};

	double sum = 0;
	double score = 0;
	std::string student[5];
	for (int l = 0; l < 5; l ++) {
		std::cout << l+1 << "번 학생의 성적을 입력하세요 : ";
		 std::cin >> score;
		 sum += score;
		 std::cout << std::endl;
	};
	std::cout << "성적 평균 : " << sum / 5;
	return 0;


}

