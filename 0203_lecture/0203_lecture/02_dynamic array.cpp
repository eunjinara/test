#include <iostream>

int main() {


	//int num;
	//std::cin >> num;
	////num�� �޾Ƽ� num X num �迭
	//int** num_arr=new int*[num];
	//for (int i = 0; i < num; i++) {
	//	num_arr[i] = new int[num];
	//}


	//for (int i = 0; i < num; i++) {
	//	for (int j = 0; j < num; j++) {
	//		num_arr[i][j] = j;
	//		std::cout<<num_arr[i][j] <<" ";
	//	}
	//	std::cout << std::endl;
	//}

	//for (int i = 0; i < num; i++) {
	//	delete[] num_arr[i];              //�����迭�� �����Ѹ�ŭ delete ���شٰ� ����
	//}
	//delete[] num_arr;
	////�ǽ� A
	//tryAgain:

	//int x,y;
	//std::cout << "x�� �Է��ϼ��� : ";
	//std::cin >> x;
	//std::cout << "y�� �Է��ϼ��� : ";
	//std::cin >> y;
	//int k = 1;
	//if (x > 0 & y > 0) {
	//	int** num_arr = new int* [x];
	//	for (int i = 0; i < x; i++) {
	//		num_arr[i] = new int[y];
	//	}

	//	for (int i = 0; i < x; i++) {
	//		for (int j = 0; j < y; j++) {
	//			num_arr[i][j] = k;
	//			std::cout << num_arr[i][j] << " ";
	//			k = k + 1;
	//		}
	//		std::cout << std::endl;
	//	}

	//	for (int i = 0; i < x; i++) {
	//		delete[] num_arr[i];              //�����迭�� �����Ѹ�ŭ delete ���شٰ� ����
	//	}
	//	delete[] num_arr;
	//}
	//else {
	//	std::cout << "x�� y��� ����� �Է����ּ���."<<std::endl;
	//	goto tryAgain;
	//} //~�ǽ� 1


	//�ǽ�2
	double grade[5];
	double sum=0;
	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "�� �л��� ������ �Է��ϼ���: ";
		std::cin >> grade[i];
		std::cout << std::endl;
		sum += grade[i];
	}
	std::cout << "���� ��� : " << sum / 5;



	/*int* p;	   //1���� �迭
	int* num_arry=new int[num];

	for (int i=0; i < num; i++) {
		num_arry[i] = i;
	}
	
	for (int i = 0; i < num; i++) {
		std::cout << num_arry[i] <<" ";

	}
	delete[] num_arry;
	delete p;*/

	/*
	int n = 5;
	int i = 10;
	p = &n;

	std::cout << p << std::endl;
	std::cout << &n << std::endl;
	std::cout << n << std::endl;
	std::cout << *p << std::endl << std::endl;

	n = 20;

	std::cout << p << std::endl;
	std::cout << *p << std::endl<<std::endl;

	*p = 30;


	std::cout << n << std::endl;
	std::cout << *p << std::endl;

	*p = i;

	std::cout << n << std::endl;
	std::cout << *p << std::endl;*/



}