#include <iostream>
#include <vector>

int main() {
	////std::vector<int> v;
	////std::vector<int> v(3); // ũ�Ⱑ 3�� ���� �迭 ����
	////std::vector<int> v(3, 1); // ũ�Ⱑ 3�� ���� �迭 ����, ���Ҹ� ��� 1�� �ʱ�ȭ
	////std::vector<int> v = { 1,2,3 }; // ũ�Ⱑ 3�� ���� �迭 ���� �� �ʱ�ȭ

	////int num;
	////std::cin >> num;
	//std::vector<int> v = { 1,2,3,4,5 };
	////v.assign(num, 1); // num ũ��, ��� ���� 1�� �Ҵ�
	////std::vector<int> v(num, 1); 

	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//	//std::cout << v[i] << " ";
	//}
	//std::cout << std::endl;

	//v.resize(6); // �迭�� ũ�⸦ resize. Ŀ�� ���̸�ŭ 0���� �ʱ�ȭ
	//v.push_back(10); // �迭�� �������� ���ϴ� ���Ҹ� �߰��� {1,2,3,4,5,10}
	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	//v.pop_back();
	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	//std::cout << v.front() << " ";
	//std::cout << v.back() << " ";

	//std::cout << std::endl;

	//v.insert(v.begin() + 2, 99); // 2�� index�� 99�� �߰��ϴ� �ڵ�
	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	//v.erase(v.begin() + 3); // 3�� index�� ����
	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	//v.erase(v.begin() + 3, v.begin() + 5); // 3, 4 index ���� (�̻�,�̸� �ε���)
	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//}
	//std::cout << std::endl;

	////v.clear(); // �迭�� ��� ���� ����. size 0
	////for (int i = 0; i < v.size(); i++) {
	////	std::cout << v.at(i) << " ";
	////}
	////std::cout << std::endl;

	//// v = { 1,2,99,0 } + 1
	//for (int& vv : v) {
	//	vv = vv + 1;
	//}

	//for (int vv : v) {
	//	std::cout << vv << " ";
	//}
	//-----------------2���� ����-------------------
	//std::vector<std::vector<int>> v2;
	//v2.assign(3, std::vector<int>(2, 1)); // 3x2 �࿭ ����
	////{ {1 ,1}, {1 ,1}, {1,1}}
	////v2[i]
	//for (int i = 0; i < v2.size(); i++) {
	//	for (int j = 0; j < v2.at(i).size(); j++) {
	//		// std::cout << v2.at(i).at(j) << " ";
	//		std::cout << v2[i][j] << " ";
	//	}
	//	std::cout << std::endl;
	//}
	//std::cout << std::endl;

	//for (std::vector<int> vv2 : v2) {
	//	for (int vvv2 : vv2) {
	//		std::cout << vvv2 << " ";
	//	}
	//	std::cout << std::endl;
	//}
	//--------------�ǽ�--------------
	/*int x, y;
	while (1){
	std::cout << "x�� �Է��ϼ��� : ";
	std::cin >> x;
	std::cout << "y�� �Է��ϼ��� : ";
	std::cin >> y;
	if (x > 0 & y > 0) break;
	else std::cout << "x�� y��� ����� �Է����ּ���." << std::endl;
	}

	std::vector<std::vector<int>> v2;
	v2.assign(x, std::vector<int>(y, 1)); // 3x2 �࿭ ����
	//{ {1 ,1}, {1 ,1}, {1,1}}
	//v2[i]

	int k=1;
	for (int i = 0; i < v2.size(); i++) {
		for (int j = 0; j < v2.at(i).size(); j++) {
			// std::cout << v2.at(i).at(j) << " ";
			v2[i][j] = k;
			std::cout << v2[i][j] << " ";
			k += 1;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;*/
	//�ǽ�2



	int x, sum=0;
	int num=0;
	std::vector<int> v3;

	while (1) {
		std::cout << "���ڸ� �Է��ϼ��� (0: exit) : ";
		std::cin >> x;

		v3.insert(v3.begin() + num, x);
		num += 1;
		if (x == 0) break;
	}

	for (int i = 0; i < v3.size(); i++) {
			sum+=v3[i];
	}
	std::cout << "����ڰ� �Է��� ���� ���� : " << sum << std::endl;

	return 0;




}