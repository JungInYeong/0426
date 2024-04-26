#include <iostream>
using namespace std;

int main()
{
	int n3;
	std::cout << "숫자를 입력하세요: ";
	std::cin >> n3;
	// 동적 배열선언& 할당
	int** arr2 = new int* [n3];
	// arr2p\[n3] : {주소값, 주소값, 주소값 , ...}
	

	for (int i = 0; i < n3; i++) {
		arr2[i] = new int[n3];
	}

	for (int i = 0; i < n3; i++) {
		for (int j = 0; j < n3; j++) {
			arr2[i][j] = 0; // 동적 배열 사용
		}
	}
	// 동적 배열해제(반납)
	for (int i = 0; i < n3; i++) {
		delete[] arr2[i];
	}
	delete[] arr2;

	return 0;
}