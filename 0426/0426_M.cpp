#include <iostream>
using namespace std;

int main()
{
	int n3;
	std::cout << "���ڸ� �Է��ϼ���: ";
	std::cin >> n3;
	// ���� �迭����& �Ҵ�
	int** arr2 = new int* [n3];
	// arr2p\[n3] : {�ּҰ�, �ּҰ�, �ּҰ� , ...}
	

	for (int i = 0; i < n3; i++) {
		arr2[i] = new int[n3];
	}

	for (int i = 0; i < n3; i++) {
		for (int j = 0; j < n3; j++) {
			arr2[i][j] = 0; // ���� �迭 ���
		}
	}
	// ���� �迭����(�ݳ�)
	for (int i = 0; i < n3; i++) {
		delete[] arr2[i];
	}
	delete[] arr2;

	return 0;
}